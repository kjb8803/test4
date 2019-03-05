calc_exe : calc.o
	g++ -fprofile-arcs -ftest-coverage -o calc_exe calc.o

calc.o : calc.h calc.cpp
	g++ -fprofile-arcs -ftest-coverage -c calc.h calc.cpp

clean : calc_exe
	rm calc.o calc_exe
