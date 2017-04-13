#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include "felsorolo.h"

using namespace std;

Fels::Fels(string fajl_nev){
    fajl.open(fajl_nev.c_str());
    if(fajl.fail()){
        cout << "Nincs ilyen fajl";
        exit(1);
    }
    vege = false;
}

void Fels::First(){
    fajl >> jelolt_szam;
    if(fajl.fail())
    {
        cout << "Ures fajl!";
        exit(0);
    }
    Fels::Next();
}
void Fels::Next(){
    fajl >> curr.korzet_szam;

    if(fajl.fail()){
        vege = true;
        curr.osszes = 0;
        curr.reszvetel = 0;
        curr.ervenyes = 0;
        return;
    }

    fajl >> curr.osszes;

    curr.ervenyes = 0;
    int db;

    for(int i = 0; i < jelolt_szam; i++){
            fajl >> db;
            curr.ervenyes += db;
    }

    fajl >> db;

    curr.reszvetel = curr.ervenyes / curr.osszes;

    curr.ervenyes -= db;

    //cout << curr.osszes << " " << curr.reszvetel << " " << curr.ervenyes << "\n";
}
adat Fels::Current(){
    return curr;
}
bool Fels::End(){
    return vege;
}
