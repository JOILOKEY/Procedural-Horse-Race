
#ifndef HORSE_H 
#define HORSE_H 

#include <string> 
using std::string;

class Horse { 
private: 
	string name; 
	int position; 
	int number; 

public: 
	Horse(int num); 
	Horse(); 

void advance(); 
void printLane(int raceLen) const; 
bool hasWon(int raceLen) const; 

};
#endif

