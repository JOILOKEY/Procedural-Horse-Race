#include "Race.h"
#include <iostream>
#include <cstdlib>   
//#include <ctime>     
using namespace std;

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;



void advance(int horseNum, int* horses) {
    int coin = rand() % 2; // 0 = tails, 1 = heads
    if (coin == 1) {
        horses[horseNum]++; 
    }
}

void printLane(int horseNum, int* horses) {
    for (int i = 0; i < TRACK_LENGTH; i++) {
        if (i == horses[horseNum])
            cout << horseNum;
        else
            cout << '.';
    }
    cout << endl;
}

bool isWinner(int horseNum, int* horses) {
    return horses[horseNum] >= TRACK_LENGTH - 1;
}

