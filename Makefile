all: polindrom

polindrom: main.o polindrom.o
	g++ main.o polindrom.o -o polindrom

main.o: main.cpp
	g++ -c main.cpp

polindrom.o: polindrom.cpp
	g++ -c polindrom.cpp

clean:
	rm -rf *.o polindrom
