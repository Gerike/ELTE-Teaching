#ifndef FELSOROLO_H_INCLUDED
#define FELSOROLO_H_INCLUDED

#include <fstream>
#include "tipusok.h"

class Fels
{
    private:
        int jelolt_szam;
        adat curr;
        bool vege;
        std::fstream fajl;
    public:
        Fels(std::string fajl_nev);
        void First();
        void Next();
        adat Current();
        bool End();
};

#endif // FELSOROLO_H_INCLUDED
