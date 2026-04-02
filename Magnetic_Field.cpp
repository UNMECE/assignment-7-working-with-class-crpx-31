#include "Magnetic_Field.h"
#include <iostream>
#include <cmath>

using namespace std;

Magnetic_Field::Magnetic_Field() {
    B = new double[3];
    B[0] = 0.0;
    B[1] = 0.0;
    B[2] = 0.0;
}

Magnetic_Field::Magnetic_Field(double x, double y, double z) {
    B = new double[3];
    B[0] = x;
    B[1] = y;
    B[2] = z;
}

Magnetic_Field::~Magnetic_Field() {
    delete[] B; 
}

void Magnetic_Field::setX(double x) { B[0] = x; }
void Magnetic_Field::setY(double y) { B[1] = y; }
void Magnetic_Field::setZ(double z) { B[2] = z; }

double Magnetic_Field::getX() { return B[0]; }
double Magnetic_Field::getY() { return B[1]; }
double Magnetic_Field::getZ() { return B[2]; }

double Magnetic_Field::calculateMagnitude() {
    return sqrt((B[0] * B[0]) + (B[1] * B[1]) + (B[2] * B[2]));
}

void Magnetic_Field::printUnitVector() {
    //find mag first, then divide each component to normalize length to 1
    double mag = calculateMagnitude();
    
    if (mag == 0) {
        cout << "magnitude is 0, cannot calculate unit vector." << endl;
        return;
    }

    double uX = B[0] / mag;
    double uY = B[1] / mag;
    double uZ = B[2] / mag;

    cout << "  Magnetic field unit vector: <" << uX << ", " << uY << ", " << uZ << ">" << endl;
}