#include "Polynomial.h"

int main() {
     Polynomial poly[3];

    for (int n = 0; n < 3; n++) {
        poly[n].getPoly();
    }

    //poly[2] = Add_2_Polynomials(poly[0], poly[1]);

    poly[0].displayPoly();

    cout << endl;
    return 0;
}