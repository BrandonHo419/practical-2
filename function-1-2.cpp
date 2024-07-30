#include <iostream>

int is_identity(int array[10][10]) {
    int size = 10;
    for(int i = 0; i < size; i++) {   
            if(array[i][i] != 1) {
                return 0;
        }
    }
    return 1;

}




// to get the identity amtrix loop 2 variable i and j using for. when both of them = each other if it is one then it is identity 