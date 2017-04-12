#include <iostream>

using namespace std;

void beolvas(int &,const int);
bool ezernel_kozelebb(int tav);

struct adat{
int tav;
int ar;
};

int main()
{
    int varosdb;
    const int varosmax=100;
    beolvas(varosdb,varosmax);
    adat varos[varosdb];
    for(int i=0;i<varosdb;i++)
    {
        cout<<"Add meg az"<<i+1<<".varos tavolsagat es repjegy arat!"<<endl;
        cin>>varos[i].tav>>varos[i].ar;
    }
    cout<<"A megadott adatok: "<<endl;
    for(int i=0;i<varosdb;i++)
    {
        cout<<varos[i].tav<<" "<<varos[i].ar<<endl;
    }

    //a feladat
    int legtavvaros=varos[0].tav;
    int legtavssz=0;
    for(int i=1;i<varosdb;i++)
    {
        if(varos[i].tav > legtavvaros)
        {
            legtavvaros=varos[i].tav;
            legtavssz=i;
        }
    }
    cout<<legtavssz+1<<endl; 
	
    //b feladat
    bool talalt = false;
    int legdragabb_jegy;

    for (int i = 0; i < varosdb; i++){
        if (ezernel_kozelebb(varos[i].tav)){
            if (talalt){
                if (varos[i].ar > legdragabb_jegy){
                    legdragabb_jegy = varos[i].ar;
                }
            }
            else {
                legdragabb_jegy = varos[i].ar;
                talalt = true;
            }
        }
    }

    if(talalt)
        cout << legdragabb_jegy;
    else
        cout << -1;



    ///c feladat
    int egyedi_arak = 0; 

    for(int i=0;i<varosdb;i++){
        int egyediardb=0;
        for(int j=0;j<varosdb;j++){
             if(varos[i].ar == varos[j].ar)
                egyediardb++;
        }
        if(egyediardb == 1) ///Amennyiben a jelenlegi város árával csak egy megegyező van (az önmaga lesz, mivel a belső ciklus végigment azon a városon is amin éppen az i.-van, és így önmagát beleszámoltuk akkor találtumnk egy olyan várost aminek az ára csak egyszer szerepel az árak között, így növeljük az egyedi árú városok számát
            egyedi_arak++;
    }
    cout << endl << egyedi_arak << endl;




    //d fel
    int dragadb=0;
    int dragak[varosdb];
    for(int i=0;i<varosdb;i++)
    {
        if(float(varos[i].ar)/float(varos[i].tav) > 100) //figyelni h ha nem egész számok vannak akkor FLOAT!!!
        {
            dragak[dragadb]=i;
            dragadb++;
        }
    }
    cout<<"A dragak szama: "<<dragadb<<endl;
    cout<<"a tomb:"<<endl;
    for(int i=0;i<dragadb;i++)
    {
        cout<<dragak[i]+1<<" ";
    }




    return 0;
}

void beolvas(int &varosdb,const int varosmax)
{
do{
    cout<<"Add meg a varosok szamat!"<<endl;
    cin>>varosdb;
    if(varosdb<1 && varosdb>varosmax)
        cout<<"Rossz adat!"<<endl;
}while(varosdb<1 && varosdb>varosmax);

}

bool ezernel_kozelebb(int tav) {
    return tav < 1000;
}