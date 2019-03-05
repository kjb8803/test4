calctest.xml : calctest.o Main.o
	g++ -lcppunit -o calctest.xml calctest.o Main.o

Main.o : Main.cpp
	g++ -c Main.cpp

calctest.o : calctest.cpp
	g++ -c calctest.cpp

clean : calctest.xml
	rm calctest.o Main.o calctest.xml
