test_exe : test.o
	g++ -o test_exe test.o

test.o : test.cpp
	g++ -o test.o test.cpp

clean : test.o
	rm test.o
