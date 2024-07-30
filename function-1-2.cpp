#include <iostream>

int is_identity(int array[10][10]) {
    int size = 10;
    int count = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(array[i][j] == 1) {
                count = count + 1;
            }
        }
    }
    if(count == 10) {
        return 1;
    }else{
        return 0;
    }

}




// to get the identity amtrix loop 2 variable i and j using for. when both of them = each other if it is one then it is identity 