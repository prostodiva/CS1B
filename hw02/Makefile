CC = g++

all: hw02

hw02: hw02.hpp hw02.cpp	hw02data.o hw02menu.o hw02saleprod.o hw02showamt.o hw02showcount.o hw02showsale.o
	g++ hw02.cpp -o hw02  hw02data.o hw02menu.o hw02saleprod.o hw02showamt.o hw02showcount.o hw02showsale.o

hw02data.o: hw02.hpp hw02data.cpp
	g++ -c hw02data.cpp -o hw02data.o

hw02saleprod.o: hw02.hpp hw02saleprod.cpp 
	g++ -c hw02saleprod.cpp -o hw02saleprod.o

hw02showamt.o: hw02.hpp hw02showamt.cpp 
	g++ -c hw02showamt.cpp -o hw02showamt.o

hw02showcount.o: hw02.hpp hw02showcount.cpp
	g++ -c hw02showcount.cpp -o hw02showcount.o

hw02showsale.o: hw02.hpp hw02showsale.cpp
	g++ -c hw02showsale.cpp -o hw02showsale.o
