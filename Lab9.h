//
// Created by ytsialitsyn on 4/4/16.
//

#ifndef BELSTU_OAP_LAB9_H
#define BELSTU_OAP_LAB9_H


class Lab9 {
private:
    int *list;

public:
    Lab9(int _list[]) {
        list = _list;
    }
    void deleteItem(int index);
    void echoList();
};


#endif //BELSTU_OAP_LAB9_H
