test_exe : test.o
	g++ -o test_exe test.o

test.o : test.cpp
	g++ -c test.cpp

clean : test.o
	rm test.o test_exe
