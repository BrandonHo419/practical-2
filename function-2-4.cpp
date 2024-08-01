#include <iostream>

int array_min(int integers[], int length) {
    if(length < 1) {
        return -1;
    }
    int tempS = integers[0];
    for(int i = 0; i < length; i++) {
        if(integers[i] < tempS) {
            tempS = integers[i];
        }
    }
    return tempS;
}

int array_max(int integers[], int length) {
    if(length < 1) {
        return -1;
    }
    int tempL = integers[0];
    for(int i = 0; i < length; i++) {
        if(integers[i] > tempL) {
            tempL = integers[i];
        }
    }
    return tempL;
}

int sum_min_max(int integers[], int length) {
    if(length < 1) {
        return -1;
    }
    int sum = array_min(integers, length) + array_max(integers, length);
    return sum;
}