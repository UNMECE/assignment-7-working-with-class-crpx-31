#include <iostream>
#include "Electric_Field.h"
#include "Magnetic_Field.h"

using namespace std;

int main() {
    Electric_Field E_default;
    Magnetic_Field B_default;

    //use parameterized constructor
    Electric_Field E_components(1e5, 10.9, 1.7e2);
    Magnetic_Field B_components(0.5, 1.2, 0.3);

    //use setter functions
    E_default.setX(5.0);
    E_default.setY(10.0);
    E_default.setZ(15.0);

    B_default.setX(2.0);
    B_default.setY(4.0);
    B_default.setZ(6.0);

    //outputs
    cout << " Electric field data:" << endl;
    cout << "  E_components magnitude: " << E_components.calculateMagnitude() << endl;
    cout << "  E_default magnitude (after setters): " << E_default.calculateMagnitude() << endl;
    cout << "  E_components inner product: " << E_components.calculateInnerProduct() << endl;
    cout << endl;

    cout << " Magnetic field data:" << endl;
    cout << "  B_components magnitude: " << B_components.calculateMagnitude() << endl;
    cout << "  B_default magnitude (after setters): " << B_default.calculateMagnitude() << endl;
    B_components.printUnitVector();

    return 0;
}