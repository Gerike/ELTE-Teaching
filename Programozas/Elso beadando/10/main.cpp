#include "reader.h"
#include "task.h"
#include<vector>
#include<iostream>
#include<windows.h>

using namespace std;

void printVector(const vector<vector<int> > data);
int selectMenuPoint();
void chooseAction(int menuPoint);
string askFileName();
void printResult(bool isSeen);

const string MENUTEXT = "Choose a menupoint:\n\t1 - Read data from file\n\t2 - Read data from console\n\t3 - Exit program\n";
const string MENUPOINT_OUT_OF_RANGE = "Choose a menupoint between [1-3]\n";
const string SELECTOR_PROMPT = "Select a menupoint: ";
const string ASK_FILE_NAME_PROMPT = "Please input the file name: ";
const string EVERY_BIRD_SEEN_MESSAGE = "\nEvery bird was seen!\n";
const string NOT_EVERY_BIRD_SEEN_MESSAGE = "\nNot every bird was seen!\n";

int main() {
    chooseAction(selectMenuPoint());
}

void printVector(const vector<vector<int> > data) {
    for(unsigned int i = 0; i < data.size(); i++) {
        for(unsigned int j = 0; j < data[i].size()-1; j++) {
            cout << data[i][j] << ", ";
        }
        cout << data[i][data[i].size()-1] << "\n";
    }
}


int selectMenuPoint() {
    int menuPoint;
    bool error = false;
    do {
        system("cls");
        cout << MENUTEXT;
        if (error)
            cout << MENUPOINT_OUT_OF_RANGE;
        cout << SELECTOR_PROMPT;
        menuPoint = readIntFromConsole();
        error = menuPoint > 3;

    } while(error);
    return menuPoint;
}

void chooseAction(int menuPoint) {
    switch(menuPoint) {
    case 1:
        printResult(isEveryBirdSeenAtLeastOnce(readFromFile(askFileName())));
        break;
    case 2:
        printResult(isEveryBirdSeenAtLeastOnce(readFromConsole()));
        break;
    case 3:
        exit(0);
    }
}

string askFileName() {
    cout << endl << ASK_FILE_NAME_PROMPT;
    string fileName;
    cin >> fileName;
    return fileName;
}

void printResult(bool isSeen) {
    if (isSeen)
        cout << EVERY_BIRD_SEEN_MESSAGE;
    else
        cout << NOT_EVERY_BIRD_SEEN_MESSAGE;
}
