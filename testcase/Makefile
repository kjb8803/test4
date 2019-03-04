testcalc_exe : testcalc.o
	g++ -o testcalc_exe testcalc.o

testcalc.o : testcalc.cpp
	g++ -c testcalc.cpp

clean : testcalc_exe
	rm testcalc.o testcalc_exe
