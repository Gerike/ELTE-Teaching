#include "task.h"
#include<vector>

using namespace std;

bool isBirdSeen(int bird, vector<vector<int> > data) {
    if (bird < 0 || bird > data[0].size())
        return false;
    for(unsigned int i = 0; i < data.size(); i++) {
        if (data[i][bird] > 0)
            return true;
    }
    return false;
}

bool isEveryBirdSeenAtLeastOnce(vector<vector<int> > data) {
    for (unsigned int i = 0; i < data[0].size(); i++) {
        if (!isBirdSeen(i, data))
            return false;
    }
    return true;
}
