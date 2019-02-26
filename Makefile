test_exe : test.o
	g++ -o test_exe test.o

test.o : test.cpp
	g++ -o test.o test.cpp
  
clean :
	rm test.o test_exe
