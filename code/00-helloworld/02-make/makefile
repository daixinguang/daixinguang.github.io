main : main.o hello.o
	g++ hello.o main.o -o main

main.o : main.cpp
	g++ -c main.cpp

hello.o : hello.cpp hello.h
	g++ -c Hello.cpp

clean :
	rm -f main.o Hello.o