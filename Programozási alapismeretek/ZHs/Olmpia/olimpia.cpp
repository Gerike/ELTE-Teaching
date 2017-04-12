#include<iostream>
using namespace std;

int main(){
    int versenyzok_szama;
    int pontozottak_szama;

    cin >> versenyzok_szama >> pontozottak_szama;


///BEOLVASÁS
    int versenyzok_eredmenyei[versenyzok_szama][5];
    for(int i = 0; i < versenyzok_szama; i++){
        for(int j = 0; j < 5; j++){
            cin >> versenyzok_eredmenyei[i][j];
        }
    }
///A feladat
    int versenyzok_pontszam[versenyzok_szama];
    for(int i = 0; i < versenyzok_szama; i++){
        versenyzok_pontszam[i] = 0;
    }

    for(int i = 0; i < versenyzok_szama; i++){
        for(int j = 0; j < 5; j++){
            if (versenyzok_eredmenyei[i][j] <= pontozottak_szama && versenyzok_eredmenyei[i][j] > 0)
                versenyzok_pontszam[i] += ( pontozottak_szama - versenyzok_eredmenyei[i][j] )*2 + 1;
        }
    }

    for(int i = 0; i < versenyzok_szama; i++){
        cout << versenyzok_pontszam[i] << " ";
    }
    cout << endl;

///B feladat
    int indultak_szama[5];
    for(int i = 0; i < 5; i++){
        indultak_szama[i] = 0;
    }

    for (int i = 0; i < versenyzok_szama; i++){
        for(int j = 0; j < 5; j++){
            if (versenyzok_eredmenyei[i][j] > 0)
                indultak_szama[j]++;
        }
    }

    for(int i = 0; i < 5; i++){
        cout << indultak_szama[i] << " ";
    }

///C feladat
    cout << endl;
    bool pontot_szerzett_mindenen[versenyzok_szama];
    for(int i = 0; i < versenyzok_szama; i++){
        pontot_szerzett_mindenen[i] = true;
    }

    for(int i = 0; i < versenyzok_szama; i++){
        for(int j = 0; j < 5; j++){
            if (versenyzok_eredmenyei[i][j] == 0)
                pontot_szerzett_mindenen[i] = false;
        }
    }

    int pontot_szerzett_mindenen_db = 0;
    for(int i = 0; i < versenyzok_szama; i++){
        if(pontot_szerzett_mindenen[i])
            pontot_szerzett_mindenen_db++;
    }
    cout << pontot_szerzett_mindenen_db << " ";
    for(int i = 0; i < versenyzok_szama; i++){
        if(pontot_szerzett_mindenen[i])
            cout << i+1 << " ";
    }

///D feladat
    cout << endl;
    int elso_db = 0;
    bool elso_versenyzok[versenyzok_szama];

    for(int i = 0; i < versenyzok_szama; i++){
        elso_versenyzok[i] = false;
    }

    for(int i = 0; i < versenyzok_szama; i++){
        for(int j = 0; j < 5; j++){
            if (versenyzok_eredmenyei[i][j] == 1){
                elso_versenyzok[i] = true;
            }
        }
    }
    for(int i = 0; i < versenyzok_szama; i++){
        if(elso_versenyzok[i] == true)
            elso_db++;
    }
    cout << elso_db << " ";
    for(int i = 0; i < versenyzok_szama; i++){
        if(elso_versenyzok[i] == true)
            cout << i+1 << " ";
    }

///E feladat
    int kijutott_db = 0;
    int kijutott_versenyzok[versenyzok_szama];

    int legkisebb_maximum = versenyzok_eredmenyei[0];
    for(int i = 1; i < versenyzok_szama; i++){
        if(versenyzok_eredmenyei[i] > legkisebb_maximum)
            legkisebb_maximum = versenyzok_eredmenyei[i];
    }
}