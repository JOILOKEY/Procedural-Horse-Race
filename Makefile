all:
	g++ -Wall -std=c++11 horseRace.cpp -o horseRace

run:
	./horseRace

clean:
	rm -f horseRace

