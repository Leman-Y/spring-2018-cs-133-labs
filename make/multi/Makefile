main: main.o circle_funcs.o
	g++ -o main main.o circle_funcs.o

main.o: main.cpp circle_funcs.h
	g++ -c main.cpp

circle_funcs.o: circle_funcs.cpp circle_funcs.h
	g++ -c circle_funcs.cpp

clean: 
	rm -f main.o circle_funcs.o



