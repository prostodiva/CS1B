CC = g++

all: hw04

hw04: hw04.hpp hw04.cpp add.o mul.o sub.o
	g++ hw04.cpp -o hw04 add.o mul.o sub.o
add.o: hw04.hpp add.cpp
	g++ -c add.cpp -o add.o
mul.o: hw04.hpp mul.cpp
	g++ -c mul.cpp -o mul.o
sub.o: hw04.hpp sub.cpp
	g++ -c sub.cpp -o sub.o

