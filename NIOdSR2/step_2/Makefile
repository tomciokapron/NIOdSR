CC = g++

zad2file: main.o Polygon.o Rectangle.o Tringle.o
	$(CC) main.o Polygon.o Rectangle.o Tringle.o -o zad2file 

main.o: main.cpp
	$(CC) -c main.cpp -o main.o

Polygon.o: Polygon.cpp
	$(CC) -c Polygon.cpp -o Polygon.o

Rectangle.o: Rectangle.cpp
	$(CC) -c Rectangle.cpp -o Rectangle.o

Tringle.o: Tringle.cpp
	$(CC) -c Tringle.cpp -o Tringle.o
	
