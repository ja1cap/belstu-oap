//
// Created by ytsialitsyn on 4/4/16.
//

#include <cstdio>
#include <iostream>
#include "Lab9.h"

using namespace std;

void Lab9::deleteItem(int index) {
//    delete list[index];
};

void Lab9::echoList() {
    cout << (sizeof(list) / sizeof(int)) << endl;
    printf("List {");
    for (int index = 0; index < (sizeof(list) / sizeof(int)); index++) {
        printf("'%d', ", list[index]);
    }
    printf("};\n");
}