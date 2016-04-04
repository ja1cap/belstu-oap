//
// Created by ytsialitsyn on 4/4/16.
//

#ifndef BELSTU_OAP_LAB5_H
#define BELSTU_OAP_LAB5_H


#include <cmath>

class Lab5 {

private:
    double c = 2.1;
    double r = 4 * pow(10, -4);
    double m = 7;

public:
    void calculateFor(double j[3]);
    void calculateWhile(double j[3]);
    double formula1(double value);
    double formula2(double value);
};


#endif //BELSTU_OAP_LAB5_H
