main:class.o main.o
	g++ -o class main.o class.o

class.o:class.cpp Header.h
	g++ -c class.cpp

main.o:main.cpp Header.h
	g++ -c main.cpp


