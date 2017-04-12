#include <iostream>

using namespace std;

void beolvas(int&);

struct emberek{
int kor;
int fizetes;
};

int main()
{
    int emberdb;
    beolvas(emberdb);
    emberek dolgozok[emberdb];
    for(int i=0;i<emberdb;i++)
    {
        cout<<"Add meg az "<<i+1<<".dolgozo korat es fizeteset!"<<endl;
        cin>>dolgozok[i].kor>>dolgozok[i].fizetes;
    }
    cout<<"A megadott adatok:"<<endl;
    for(int i=0;i<emberdb;i++)
    {
        cout<<dolgozok[i].kor<<" "<<dolgozok[i].fizetes<<endl;
    }

    //a feladat
    int maxkor=dolgozok[0].kor;
    int maxkorssz=0;
    for(int i=1;i<emberdb;i++)
    {
        if(dolgozok[i].kor>maxkor)
        {
            maxkor=dolgozok[i].kor;
            maxkorssz=i;
        }
    }
    cout<<maxkorssz+1<<endl; ///Pipa

    //b feladat
    int kisfizdb=0;
    for(int i=0;i<emberdb;i++)
    {
        if(dolgozok[i].kor > 40 && dolgozok[i].fizetes < 200000)
        {
            kisfizdb++;
        }
    }
    cout<<kisfizdb<<endl; ///Pipa

    //c feladat
    int eletkor_fajta = 0; ///Itt számoljuk hány fajta életkor volt
    for(int i = 0; i < emberdb; i++){ ///Végigmegyünk az összes dolgozón
        int j = 0; ///A jelenlegi dolgozóhoz képest végigmegyünk az összes előtte levő dolgozón, lin. kereséssel megnézzük szerepelt-e ez az életkor korábban a dolgozók között
        bool volt_korabban = false;
        while( j < i && !volt_korabban){
            volt_korabban = dolgozok[i].kor == dolgozok[j].kor; ///Ha a jelenlegi dolgózó életkora megegyezne bármelyik előtte levő dolgozó életkorával, akkor már nem kell beleszámolnunk mivel már előtte beleszámoltuk
            j++;
        }
        if(!volt_korabban) ///Ha nem szerepelt korábban akkor növeljük az eletkor fajtákat (ha mégegyszer szerepelne, akkor az előző keresés megtalálná ezt, és már nem növelnénk mégegyszer)
            eletkor_fajta++;
    }

    cout << eletkor_fajta << endl; ///Kiírjuk

    //d feladat
    int fiatalok[emberdb];
    int fiataldb=0;
    for(int i=0;i<emberdb;i++)
    {
        if(dolgozok[i].kor<30)
        {
            fiatalok[fiataldb]=i;
            fiataldb++;
        }
    }
    cout<<fiataldb<<" ";
    for(int i=0;i<fiataldb;i++)
    {
        cout<<fiatalok[i]+1<<" ";
    }

    ///Pipa

    return 0;
}

void beolvas(int &emberdb)
{
    cout<<"Add meg a dolgozok szamat!"<<endl;
    cin>>emberdb;
}