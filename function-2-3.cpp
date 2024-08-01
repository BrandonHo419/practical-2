#include <iostream>

int sum_if_palindrome(int integers[], int length) {
    int sum = 0;
    for(int i =0; i < length; i++) {
        sum += integers[i];
    }
    return sum;
}

bool is_palindrome(int integers[], int length) {
    if(length < 1) {
        return false;
    }
    int midPoint = length/2;
    for(int i = 0; i < midPoint; i++) {
        for(int j = length+1; j > midPoint; j++) {
            if(integers[i] != integers[j]) {
                return -2;
            }
        }
    }
    return true;
    
}

int sum_array_elements(int integers[], int length) {
    int sum = 0;
    for(int i =0; i < length; i++) {
        sum += integers[i];
    }
    return sum;
}