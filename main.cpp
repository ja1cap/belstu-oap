#include <iostream>
#include "Lab4.h"
#include "Lab5.h"

using namespace std;

int main() {

    int labNumber;

    labNumber = 5;
//    cout << "Введите номер лабораторной: ";
//    cin >> labNumber;

    switch (labNumber) {
        case 4: {
            //Ввести три числа m, n, p. Подсчитать количество отрицательных чисел
            cout << "Lab#4" << endl;

            int m, n, p;
            printf("Введите m: ");
            scanf("%d", &m);
            printf("Введите n: ");
            scanf("%d", &n);
            printf("Введите p: ");
            scanf("%d", &p);

            Lab4 lab4(m, n, p);
            cout << "Количество отрицательных чисел: " << lab4.getNegativesAmount() << endl;
        }
            break;
        case 5: {

            cout << "Lab#5" << endl;

            double jFor[3] = {4.2, 0.3, 1.7};
            Lab5 lab5;
            lab5.calculateFor(jFor);

            double jWhile[3] = {0, 0.1, 1.7};
            lab5.calculateWhile(jWhile);

        }
            break;
        default:
            cout << "Лаборатоная работа не найдена:(";
    }

    return 0;
}