#ifndef MAGNETIC_FIELD_H
#define MAGNETIC_FIELD_H

class Magnetic_Field {
private:
    double *B; 

public:
    Magnetic_Field();
    Magnetic_Field(double x, double y, double z);
    ~Magnetic_Field();

    void setX(double x);
    void setY(double y);
    void setZ(double z);

    double getX();
    double getY();
    double getZ();

    double calculateMagnitude();
    void printUnitVector();
};

#endif