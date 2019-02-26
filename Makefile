test.o : test.cpp
	g++ -o test.o test.cpp

test_exe : test.o
	g++ -o -c test_exe test.o

clean : test.o
	rm test.o
