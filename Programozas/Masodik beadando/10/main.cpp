#include <iostream>
#include "felsorolo.h"

using namespace std;

int main(){

    cout << "Kerem adja meg a fajl nevet: ";

    string nev;
    cin >> nev;

    Fels felsorolo(nev);
    felsorolo.First();

    float osszes = 0;
    float ervenyes = 0;
    float max_atlag = felsorolo.Current().reszvetel;
    int index = 1;

    while(!felsorolo.End()){
        osszes += felsorolo.Current().osszes;
        ervenyes += felsorolo.Current().ervenyes;

        if(felsorolo.Current().reszvetel > max_atlag){
            max_atlag = felsorolo.Current().reszvetel;
            index = felsorolo.Current().korzet_szam;
        }
        felsorolo.Next();
    }

    cout << "A legaktivabb korzet: " << index << "\n";
    //cout << osszes << " " << ervenyes <<"\n";
    if(ervenyes / osszes > 0.5)
        cout << "A szavazas ervenyes volt";
    else
        cout << "A szavazas ervenytelen volt";
    return 0;
}
