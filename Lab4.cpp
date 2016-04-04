//
// Created by ytsialitsyn on 4/4/16.
//

#include "Lab4.h"

int Lab4::getNegativesAmount() {
    int amount = 0;
    if (m < 0) {
        amount++;
    }
    if (n < 0) {
        amount++;
    }
    if (p < 0) {
        amount++;
    }
    return amount;
}
