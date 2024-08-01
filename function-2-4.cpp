#include <iostream>

int tempS = 0;
int tempL = 0;


int array_min(int integers[], int length) {
    for(int i = 0; i < length; i++) {
        if(integers[i] < tempS) {
            tempS = integers[i];
        }
    }
    return tempS;
}

int array_max(int integers[], int length) {
    for(int i = 0; i < length; i++) {
        if(integers[i] > tempL) {
            tempL = integers[i];
        }
    }
    return tempL;
}

int sum_min_max(int integers[], int length) {
    int sum = tempS + tempL;
    return sum;
}