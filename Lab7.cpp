//
// Created by ytsialitsyn on 4/4/16.
//

#include "Lab7.h"
#include <iostream>

using namespace std;

void Lab7::calculate(int n, double *a) {

    double value;

    double h = d;

    for (unsigned int i = 0; i < n; i++) {
        value = a[i];
        h += pow(value, 2);
    }

    cout << "Результат формулы: h = " << h << endl;

};