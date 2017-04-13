#include "task.h"
#include<vector>

using namespace std;

//Ez a függvény egy linker, eldönti hogy a madarat legalább egyszer láttak-e, ha talál olyan helyet, visszatér igazzal. Ha végigmegy a tömbön, és nem talál olyan helyet ahol a madarat látták volna akkor hamissal tér vissza.
bool isBirdSeen(int bird, vector<vector<int> > data) { 
    if (bird < 0 || bird > data[0].size())
        return false;
    for(unsigned int i = 0; i < data.size(); i++) {
        if (data[i][bird] > 0)
            return true;
    }
    return false;
}

//Minden madárra megnézi hogy látták-e már. Ha valamelyiket nem, akkor visszatér hamissab mivel nem minden madarat láttak. Ha minden madarat láttak, akkor igazzal tér vissza.
bool isEveryBirdSeenAtLeastOnce(vector<vector<int> > data) {
    for (unsigned int i = 0; i < data[0].size(); i++) {
        if (!isBirdSeen(i, data))
            return false;
    }
    return true;
}
