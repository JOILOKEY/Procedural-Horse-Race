#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Race.h"  

int main() {
    srand(time(0));

    const int NUM_HORSES = 5;
    int horses[NUM_HORSES] = {0};

    bool winner = false;

    while (!winner) {
        for (int i = 0; i < NUM_HORSES; i++) {
            advance(i, horses);
        }

        for (int i = 0; i < NUM_HORSES; i++) {
            printLane(i, horses);
        }

        for (int i = 0; i < NUM_HORSES; i++) {
            if (isWinner(i, horses)) {
                std::cout << "Horse " << i << " wins!" << std::endl;
                winner = true;
            }
        }

        std::cout << "---------------" << std::endl;
    }

    return 0;
}

