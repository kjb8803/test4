calctest_exe : calctest.o Main.o
	g++ -o calctest_exe calctest.o Main.o

Main.o : Main.cpp
	g++ -c Main.cpp

calctest.o : calctest.cpp
	g++ -c calctest.cpp

clean : calctest_exe
	rm calctest.o Main.o calctest_exe
