#include "Electric_Field.h"
#include <cmath>

//scope operator :: used to access member functions outside the class
Electric_Field::Electric_Field() {
    //dynamically allocate array of 3 doubles
    E = new double[3];
    E[0] = 0.0;
    E[1] = 0.0;
    E[2] = 0.0;
}

Electric_Field::Electric_Field(double x, double y, double z) {
    E = new double[3];
    E[0] = x;
    E[1] = y;
    E[2] = z;
}

Electric_Field::~Electric_Field() {
    //gotta use delete[] since we used new[] to avoid memory leaks
    delete[] E; 
}

void Electric_Field::setX(double x) { E[0] = x; }
void Electric_Field::setY(double y) { E[1] = y; }
void Electric_Field::setZ(double z) { E[2] = z; }

double Electric_Field::getX() { return E[0]; }
double Electric_Field::getY() { return E[1]; }
double Electric_Field::getZ() { return E[2]; }

double Electric_Field::calculateMagnitude() {
    return sqrt((E[0] * E[0]) + (E[1] * E[1]) + (E[2] * E[2]));
}

double Electric_Field::calculateInnerProduct() {
    //inner product is just dot product with itself
    return (E[0] * E[0]) + (E[1] * E[1]) + (E[2] * E[2]);
}