#include <iostream>

int is_identity(int array[10][10]) {
    for(int i = 0; i < 10; i++) { 
        for(int j = 0; j < 10; j++) {
            if(i == j && array[i][j] != 1) {
                return 0;
        }
        if(i != j && array[i][j] !=0) {
            return 0;
        }
    }
    return 1;

}




// to get the identity amtrix loop 2 variable i and j using for. when both of them = each other if it is one then it is identity 