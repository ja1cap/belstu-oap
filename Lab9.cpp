//
// Created by ytsialitsyn on 4/4/16.
//

#include <cstdio>
#include <iostream>
#include "Lab9.h"

using namespace std;

void Lab9::deleteItem(int deleteIndex) {
    cout << "Удалить элемент массива #" << deleteIndex << endl;
    int _list[listSize-1];
    int k = 0;
    for( int i = 0; i < listSize; i++ ){
        if( i+1 != deleteIndex ){
            _list[k] = list[i];
            k++;
        }
    }
    listSize--;
    list = _list;
};

void Lab9::echoList() {
    printf("List {");
    for (int index = 0; index < listSize; index++) {
        if(listSize != (index+1)){
            printf("%d, ", list[index]);
        } else {
            printf("%d", list[index]);
        }
    }
    printf("};\n");
}