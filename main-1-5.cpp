#include <iostream>

extern void print_summed(int array1[3][3],int array2[3][3]);

int main() {
    int array1[3][3] = {
        {1, 3, 5},
        {7, 9, 2},
        {4, 6, 8}
    };
    int array2[3][3] = {{0, 2, 4},
        {6, 8, 1},
        {3, 5, 7}
    };

    print_summed(array1, array2);   
    
     
}