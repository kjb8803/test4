test.out : test.o
	g++ -o test.out test.o

test.o : test.cpp
	g++ -c test.o test.cpp

clean : test.o
	rm test.o
