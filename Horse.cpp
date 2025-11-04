#include "Horse.h"
#include <iostream>

Horse::Horse(int num) : position(0), number(num) {}
Horse::Horse() : position(0), number(0) {}


void Horse::advance() {
    if (rand() % 2 == 1) {
        position++;
    }
}

void Horse::printLane(int raceLen) const {
    for (int i = 0; i < raceLen; ++i) {
        if (i == position) {
            std::cout << number;
        } else {
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}

bool Horse::hasWon(int raceLen) const {
    return position >= raceLen;
} 
