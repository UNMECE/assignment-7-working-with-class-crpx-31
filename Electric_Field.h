#ifndef ELECTRIC_FIELD_H
#define ELECTRIC_FIELD_H

class Electric_Field {
private:
    double *E; 

public:
    Electric_Field();
    Electric_Field(double x, double y, double z);
    ~Electric_Field();

    void setX(double x);
    void setY(double y);
    void setZ(double z);

    double getX();
    double getY();
    double getZ();

    double calculateMagnitude();
    double calculateInnerProduct();
};

#endif