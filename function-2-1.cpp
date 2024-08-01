#include <iostream>
#include <cmath>
#include <string>
 

void print_binary_str(std::string decimal_number) {
    int convert = stoi(decimal_number);
    if(convert >= 1000000000) {
        std::cout << "ERROR" << std::endl;
        return;
    }

    if (convert <= 0) {
        std::cout << "ERROR" << std::endl;
    }
    
    int i = 0;
    int arr[100] = {0};
    int position = 0;

    while (convert > 0) {
        arr[position++] = (convert % 2);

        decimal_number = convert / 2;
        i++;
    }

    for (int j = i - 1; j>= 0; j--){
        std::cout << arr[j] << " ";
    }
    


}

