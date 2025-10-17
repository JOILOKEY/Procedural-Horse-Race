
#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;


void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main() {
    srand(time(NULL)); 

    int horses[NUM_HORSES] = {0}; 
    bool winnerFound = false;

    while (!winnerFound) {
        for (int i = 0; i < NUM_HORSES; i++) {
            advance(i, horses);
        }

        
        for (int i = 0; i < NUM_HORSES; i++) {
            printLane(i, horses);
        }

        
        for (int i = 0; i < NUM_HORSES; i++) {
            if (isWinner(i, horses)) {
                cout << "Horse " << i << " WINS!!!" << endl;
                winnerFound = true;
            }
        }

        
        if (!winnerFound) {
            cout << "Press enter for another turn";
            cin.get(); 
        }
    }

    return 0;
}

// Moves horse forward randomly (50% chance)
void advance(int horseNum, int* horses) {
    int coin = rand() % 2; // 0 = tails, 1 = heads
    if (coin == 1) {
        horses[horseNum]++; // move forward one position
    }
}

void printLane(int horseNum, int* horses) {
    for (int pos = 0; pos < TRACK_LENGTH; pos++) {
        if (pos == horses[horseNum])
            cout << horseNum;
        else
            cout << '.';
    }
    cout << endl;
}


bool isWinner(int horseNum, int* horses) {
    return horses[horseNum] >= TRACK_LENGTH - 1;
}

