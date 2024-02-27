windows:
	-mkdir bin
	-mkdir obj
	g++ -Wall -fexceptions -g -c main.cpp -o obj\main.o
	g++ -o bin\main.exe obj\main.o