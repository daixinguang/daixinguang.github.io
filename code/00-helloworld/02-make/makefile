main : main.o Hello.o
	g++ Hello.o main.o -o main

main.o : main.cpp
	g++ -c main.cpp

Hello.o : Hello.cpp Hello.h
	g++ -c Hello.cpp

clean :
	rm -f main.o Hello.o