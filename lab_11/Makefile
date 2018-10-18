CXXFLAGS=-std=c++14

main: main.o funcs.o
				g++ -o main main.o funcs.o

main.o: main.cpp funcs.h def.h
				g++ $(CXXFLAGS) -c main.cpp

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

tests.o: tests.cpp funcs.h def.h

funcs.o: funcs.cpp funcs.h def.h
				g++ $(CXXFLAGS) -c funcs.cpp

poem: poem.o
	g++ -o poem poem.o 

poem.o: poem.cpp
	g++ $(CXXFLAGS) -c poem.cpp


clean:
				rm -f main.o funcs.o poem.o


