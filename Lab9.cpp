//
// Created by ytsialitsyn on 4/4/16.
//

#include <cstdio>
#include <iostream>
#include "Lab9.h"

using namespace std;

void Lab9::deleteItem(int deleteIndex) {
    cout << "Удалить элемент массива #" << deleteIndex << endl;
    for (int i = 0; i < listSize; i++) {
        if (i + 1 >= deleteIndex) {
            list[i] = list[i + 1];
        }
    }
    listSize--;
};

void Lab9::echoList() {
    printf("Массив {");
    for (int index = 0; index < listSize; index++) {
        if (listSize != (index + 1)) {
            printf("%d, ", list[index]);
        } else {
            printf("%d", list[index]);
        }
    }
    printf("};\n");
}