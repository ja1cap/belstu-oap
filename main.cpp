#include <iostream>
#include "Lab4.h"
#include "Lab5.h"
#include "Lab7.h"
#include "Lab9.h"

using namespace std;

int main() {

    int labNumber;

//    labNumber = 7;
    cout << "Введите номер лабораторной: ";
    cin >> labNumber;

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
        case 7: {
            Lab7 lab7;
            int n = 5;
            double a[] = {0.8, 4, -7, 2, 0.91};
            lab7.calculate(n, a);
        }
            break;
        case 9: {
            int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            Lab9 lab9(a);
            lab9.echoList();
            int k = 5;
//            lab9.deleteItem(k);
//            lab9.echoList();
        }
            break;
        default:
            cout << "Лаборатоная работа не найдена:(";
    }

    return 0;
}