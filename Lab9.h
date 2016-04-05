//
// Created by ytsialitsyn on 4/4/16.
//

#ifndef BELSTU_OAP_LAB9_H
#define BELSTU_OAP_LAB9_H


class Lab9 {
public:
    int *list;
    int listSize;
    Lab9(int *list, int listSize) : list(list), listSize(listSize) { }
    void deleteItem(int deleteIndex);
    void echoList();
};


#endif //BELSTU_OAP_LAB9_H
