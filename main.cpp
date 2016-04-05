#include <iostream>
#include <cstring>
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

    cout << "Lab#" << labNumber << endl;

    switch (labNumber) {
        case 4: {
            //Ввести три числа m, n, p. Подсчитать количество отрицательных чисел

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

            int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            int listSize = 10;

            Lab9 lab9(list, listSize);
            lab9.echoList();

            int k = 5;
            lab9.deleteItem(k);
            lab9.echoList();

            int newList[20];
            int newSize = 0;
            for (int index = 0; index < 9; index++) {
                if (index % 2 == 0 && index != 0) {
                    newList[newSize++] = 0;
                    newList[newSize++] = list[index];
                }
                else {
                    newList[newSize++] = list[index];
                }
            }

            printf("Массив {");
            for (int i = 0; i < newSize; i++) {
                if (newSize != (i + 1)) {
                    printf("%d, ", newList[i]);
                } else {
                    printf("%d", newList[i]);
                }
            }
            printf("};\n");

        }
            break;
        case 12: {

            char n[256];
            cout << "Введите строку n: ";
            cin >> n;

            char m[256];
            cout << "Введите строку для вставки m: ";
            cin >> m;

            size_t k;
            cout << "Введите позицию для вставки k: ";
            cin >> k;

            char pref[512];
            strncpy(pref, n, k);

            char tail[512];
            memmove(tail, n + k, strlen(n) - k + 1);

            char result[512];
            strcat(result, pref);
            strcat(result, m);
            strcat(result, tail);
            cout << result << endl;

        }
            break;
        case 13: {

            const int n = 2, m = 4;
            int A[n][m];

            cout << "Введите элементы массива" << endl;
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    cin >> A[i][j];
                }
            }

            int c = 0;
            int r = 0;
            int max = A[c][r];

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (A[i][j] > max) {
                        max = A[i][j];
                        c = i;
                        r = j;
                    }
                }
            }

            cout << " Исходный массив:" << endl;
            for (int i = 0; i < n; i++) {
                cout << "\n";
                for (int j = 0; j < m; j++)
                    cout << "A[" << i << "," << j << "] =" << A[i][j] << "\t";
            }
            cout << endl;

            cout << "Максимальный элемент A[" << c << "," << r << "] =" << max << endl;

        }
            break;
        default:
            cout << "Лаборатоная работа не найдена:(";
    }

    return 0;
}