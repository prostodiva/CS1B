CC = g++

all: main

main: inctax.h main.cpp inctax.o main.o
	g++ main.cpp -o main inctax.o 

inctax.o: inctax.h inctax.cpp
	g++ -c inctax.cpp -o inctax.o


