test.o : test.cpp
	g++ -o test.o test.cpp

test_exe : test.o
	g++ -o test_exe test.o

clean : test_exe
	rm test.o test_exe
