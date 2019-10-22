.cpp :
	g++ $*.cpp -o $* -std=c++11

poly_class:
	g++ -o $@ $@.o Polynomial.o -std=c++11

poly_class.o : Polynomial.h
Polynomial.o : Polynomial.h