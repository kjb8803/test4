calctest_rst : calctest.o Main.o
	g++ -lgcov -lcppunit -o calctest_rst calctest.o Main.o

Main.o : Main.cpp
	g++ -c Main.cpp

calctest.o : calctest.cpp
	g++ -fprofile-arcs -ftest-coverage -c calctest.cpp

clean : calctest_rst
	rm calctest.o Main.o calctest_rst
