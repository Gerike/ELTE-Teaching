﻿/*#define CATCH_CONFIG_MAIN 
//Azért van kikommentezve az egész, mivel ha CodeBlocks-ba fordítjuk ez a sor belerakja egy main() függvényt ami lefuttatja a teszteket, de mivel már van a main.cpp-be egy main függvény a CodeBlocks sírni fog, ezt elkerülendő ha tesztelni akarunk a main::main()-t kommentezzük, ha futtatni a programot, akkor ezt. Természetesen parancsosrból simán lehet fordítani / futtatni mindkettőt

#include "catch.hpp"
#include "../reader.h"
#include "../task.h"
#include<vector>

using namespace std;

TEST_CASE( "When a bird is not seen, isBirdSeen() should give false"){
    vector<vector<int> > data = readFromFile("tests/not_seen.txt");
    REQUIRE(isBirdSeen(0, data) == false);
}

TEST_CASE( "When a bird is seen, isBirdSeen() should give true"){
    vector<vector<int> > data = readFromFile("tests/seen.txt");
    REQUIRE(isBirdSeen(0, data) == true);
}

TEST_CASE( "When a bird is not exists, isBirdSeen() should give false"){
    vector<vector<int> > data = readFromFile("tests/seen.txt");
    REQUIRE(isBirdSeen(-1, data) == false);
    REQUIRE(isBirdSeen(data[0].size()+1, data) == false);
}

TEST_CASE( "When every bird is seen at least once isEveryBirdSeenAtLeastOnce() should give true"){
    vector<vector<int> > data = readFromFile("tests/seen.txt");
    REQUIRE(isEveryBirdSeenAtLeastOnce(data) == true);
}

TEST_CASE( "When any bird is not seen at least once isEveryBirdSeenAtLeastOnce() should give false"){
    vector<vector<int> > data = readFromFile("tests/not_seen.txt");
    REQUIRE(isEveryBirdSeenAtLeastOnce(data) == false);
}*/

