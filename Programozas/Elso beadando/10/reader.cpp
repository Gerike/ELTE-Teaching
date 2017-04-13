#include "reader.h"
#include<iostream>
#include<fstream>
#include<sstream>
#include <stdlib.h>

using namespace std;

//Pozitív madárszámot tudunk csak elfogadni
bool validateNumber(const int &number) {
    return number >= 0;
}

//Beolvasunk egy adatot a konzolról, és validáljuk hogy az nekünk megfelelő-e
int readIntFromConsole() {
    int number;
    bool error;
    do {
        cin >> number;
        if((error=cin.fail()))
            cin.clear();

        string tmp="";
        getline(cin, tmp);
        error = tmp.size()!=0 || !validateNumber(number);
        if(error)
            cout << endl << ERROR_MESSAGE_INVALID_INPUT << endl;
    } while(error);
    return number;
}

//Beolvassuk a madarak előfordulását a konzolról
vector<vector<int> > readFromConsole() {
    cout << "Please define the lines in the file: ";
    int lines = readIntFromConsole();

    cout << "Please define the columns in every line: ";
    int columns = readIntFromConsole();

    vector<vector<int> > data;
    data.resize(lines);

    for(int i = 0; i < lines; i++) {
        data[i].resize(columns);
        cout << "\nPlease add the data in the " << i+1 << ". line:\n";
        for(int j = 0; j < columns; j++) {
            cout << "\tPlease add the data in the " << j+1 << ". column: ";
            data[i][j] = readIntFromConsole();
        }
    }

    return data;
}

//Beolvassuk a madarak előfordulását egy fájlból
vector<vector<int> > readFromFile(const string &fileName) {
    ifstream file(fileName.c_str());
    if(file.fail()) {
        cout << ERROR_MESSAGE_INVALID_FILENAME;
        exit(0);
    }

    vector<vector<int> > data;
    string line;

    while(!file.eof()) {
        getline(file, line);
        data.push_back(convertLineToVector(line));
    }

    return data;
}

//Egy fájl sorát átkonvertáljuk vectorrá hogy jobban tudjuk kezelni
vector<int> convertLineToVector(const string &line) {
    stringstream ss(line);
    vector<int> tokens;
    string buffer;

    while (ss >> buffer)
        tokens.push_back(atoi(buffer.c_str()));

    return tokens;
}


