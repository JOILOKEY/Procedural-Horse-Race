CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = horse_race
OBJS = main.o Horse.o Race.o

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp Horse.h Race.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Horse.o: Horse.cpp Horse.h
	$(CXX) $(CXXFLAGS) -c Horse.cpp

Race.o: Race.cpp Race.h Horse.h
	$(CXX) $(CXXFLAGS) -c Race.cpp

clean:
	rm -f *.o $(TARGET)
