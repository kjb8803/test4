calctest_exe : calctest.o
	g++ -o calctest_exe calctest.o

calctest.o : calctest.cpp
	g++ -c calctest.cpp

clean : calctest_exe
	rm calctest.o calctest_exe
