#include "Polynomial.h"

Polynomial::Polynomial() {
    degree = 0;

    for (int i : coef) {
        coef[i] = 0;
    }
}

void Polynomial::getPoly() {
    cout << "\nDegrees of polynomial: ";
    cin >> degree;

    cout << "\nEnter " << degree+1 << " coefficients: ";
    for (int i = degree; i >= 0; i--) {
        cin >> coef[i];
    }
}

void Polynomial::displayPoly() {
    static int n;
    cout << "\nPolynomial # " << ++n << " is: ";

    for (int i = degree; i >= 0; i--) {
        if (i < degree) {
            if (coef[i] > 0) cout << " +";
            else cout << " ";
        }
        cout << coef[i];
        if (i > 1) cout << "x^";
        if (i == 1) cout << "x";
    }
    cout << endl;
}