#ifndef __POLYNOMIAL_H__
#define __POLYNOMIAL_H__

#include <iostream>

using namespace std;

class Polynomial {
    private:
        int degree;
        int coef[9];
    public:
        Polynomial();
        void getPoly();
        void displayPoly();
};

#endif