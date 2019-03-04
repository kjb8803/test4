calc_exe : calc.o
	g++ -o calc_exe calc.o

calc.o : calc.cpp
	g++ -c calc.cpp

clean : calc_exe
	rm calc.o calc_exe
