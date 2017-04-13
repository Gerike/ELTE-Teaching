/*
Készítette: Kovács Gergő Richárd
NEPTUN kód: RAHMBF
Készült: 2015.03.03
Első beadandó feladat - 11
Feladat leírása: Egy határállomáson feljegyezték az átlépő utasok útlevélszámát. Melyik útlevélszámú
utas fordult meg leghamarabb másodszor a határon?
*/

#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<stdlib.h>
#include<locale>

using namespace std;

struct fmaxk //Feltételes maximumkiválasztás visszatérési értékének definiálása
{
    bool l;
    int mini;
    int ind;
};
struct linker //Lineáris keresés visszatérési értékének definiálása
{
    bool l;
    int ind;
};

//Használt függvények
int Beolvas_Int(); //Beolvas egy számot
bool Int(string szam); //Eldönti a paraméterről hogy az szám-e
int Menu_Kiv(); //Menupont kivalasztasa a Menuben
vector<int> Menu(); //Menu kiírasa
vector<int> Beolvas_Bill(); //Billentyuzetrol beolvasas
string Beolvas_Fnev(bool err); //Fájl név bekérése billentyűzetről
vector<int> Beolvas_Fajl(); //Fájl beolvasása + fájlnév helyességének ellenőrzése
linker Visszajott(vector<int> &utlevelszam, int m); //Meghatározza az m-edik ember visszajött-e és ha igen akkor hanyadik helyen (LinKer)
fmaxk Leghamarabb(vector<int> &utlevelszam); //Meghatározza melyik ember jött vissza leghamarabb (Felt MaxKer)
void Eredmeny_Kiir(bool l, int szam, vector<int> &utlevelszam); //Eredmény kiírása

int main()
{

    //Vektor feltöltése fájlból vagy billentyűzetről
    vector<int> utlevelszam = Menu();
    //Feltételes maximumkiválasztás
    fmaxk ered = Leghamarabb(utlevelszam);
    //Eredmény kiírása
    Eredmeny_Kiir(ered.l, ered.ind, utlevelszam);

    return 0;
}
vector<int> Beolvas_Bill()
{
    system("cls");
    cout << "Kerem adja meg sorban az utlevelek szamat, jelezze 0-val ha be kivanja fejezni az adatbevitelt!\nAz On altal bevitt utlevelek:\n";
    vector<int> utlevel;
    do
    {
       utlevel.push_back(Beolvas_Int());
    }
    while(utlevel[utlevel.size()-1] != 0);
    utlevel.pop_back();
    return utlevel;
}
bool Int(string szam)
{
    return (all_of(szam.begin(), szam.end(), ::isdigit));
}
int Beolvas_Int()
{
    string be;
    bool szame;
    do
    {
        cin >> be;
        if(Int(be))
            return atoi(be.c_str());
        else
            cout << "Hibas ertek! Kerem csak szamokat adjon meg!: ";

    }while(true);

}
int Menu_Kiv()
{
    int men;
    do
    {
       men = Beolvas_Int();
       if((men != 1) && (men != 2))
            cout << "Kerem 1-et vagy 2-t adjon meg inputnak!: ";
    }
    while((men != 1) && (men != 2));

    return men;
}
vector<int> Menu()
{
    cout << "Kerem valasszon hogyan kivan adatokat bevinni:\n   1. Beolvasas billentyuzetrol\n   2. Beolvasas fajlbol\nA valasztott menupont: ";
    vector<int> utlevel;
    switch(Menu_Kiv())
    {
        case 1: utlevel = Beolvas_Bill(); break;
        case 2: utlevel = Beolvas_Fajl(); break;
    }
    return utlevel;
}
string Beolvas_Fnev(bool err)
{
    system("cls");
    string nev;
    if(!err)
        cout << "Kerem adja meg a fajlnevet kiterjesztessel: ";
    else
        cout << "Hibas bemenet! Kerem ellenorizze hogy helyes-e a fajlnev es a kiterjesztes es adja meg ujra: ";
    cin >> nev;
    return nev;

}
vector<int> Beolvas_Fajl()
{
    vector<int> utlevelszam;
    fstream be;
    string fajlnev;
    bool err = false;
    do
    {
        be.clear();
        fajlnev = Beolvas_Fnev(err);
        be.open(fajlnev.c_str());

        if(!be.is_open())
            err = true;
    }
    while(!be.is_open());

    int bek;
    while(!be.eof())
    {
        be >> bek;
        utlevelszam.push_back(bek);
    }
    return utlevelszam;
}
linker Visszajott(vector<int> &utlevelszam, int m)
{
    linker ret; //Visszatérési érték

    //Lineáris keresés
    ret.l = false;
    for(int i = m+1; !ret.l && i < utlevelszam.size(); i++)
        {
            ret.l = (utlevelszam[m] == utlevelszam[i]);
            ret.ind = i;
        }

    return ret;
}

fmaxk Leghamarabb(vector<int> &utlevelszam)
{
    fmaxk ret; //Visszatérési érték definiálása
    linker link; //Kevesebb függvénylefutás miatt elmenjtük a LinKer értékét ebbe a változóba
    //Feltételes maximumkiválasztás
    ret.l = false;
    for(int i = 0; i < utlevelszam.size(); i++)
    {
       link = Visszajott(utlevelszam,i);  //Elmentjük a LinKer eredményét így nem kell minden feltételbe / értékadásnál újrahívni a függvényt

       if(link.l && ret.l)
            if(ret.mini > link.ind - i)
                {
                ret.mini = link.ind - i;
                ret.ind = i;
                }
        if (link.l && !ret.l)
        {
            ret.l = true;
            ret.mini = link.ind - i;
            ret.ind = i;
        }

    }
    return ret;
}

void Eredmeny_Kiir(bool l, int szam, vector<int> &utlevelszam)
{
    system("cls");
    if(l)
        cout << "Az utlevel szama annak az embernek aki leghamarabb fordult meg masodszor a hataron: " << utlevelszam[szam];
    else
        cout << "Nem volt olyan, aki ketszer is megfordult volna";

    cout << "\n\n\n";
}