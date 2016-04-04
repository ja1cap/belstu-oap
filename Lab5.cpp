//
// Created by ytsialitsyn on 4/4/16.
//

#include "Lab5.h"
#include <iostream>

using namespace std;

void Lab5::calculateFor(double j[3]) {

    double value;
    for (unsigned int i = 0; i < 3; i++) {
        value = j[i];
        cout << "Значение: " << value << endl;
        cout << "Результат формулы 1: h = " << formula1(value) << endl;
        cout << "Результат формулы 2: y = " << formula2(value) << endl;
    }

}

void Lab5::calculateWhile(double j[3]) {

    int i = 0;
    double value;

    do {

        i++;

        value = j[i];
        cout << "Значение: " << value << endl;
        cout << "Результат формулы 1: h = " << formula1(value) << endl;
        cout << "Результат формулы 2: y = " << formula2(value) << endl;

    } while (i < 3);

}

double Lab5::formula1(double value) {
    return (10 * r - value) / (pow(c, 2) + exp(-m));
}

double Lab5::formula2(double value) {
    double h = formula1(value);
    return (h * m - pow(value, 2) + 0.1 * c);
}