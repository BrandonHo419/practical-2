#include <iostream>

extern int sum_if_palindrome(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int main() {
    int integers[] = {1, 3, 5, 3, 1};
    int length = sizeof(integers)/sizeof(integers[0]);

    is_palindrome(integers, length);
    
    if(is_palindrome(integers, length) == true) {
        std::cout << sum_if_palindrome(integers, length) << std::endl;
    }else{  
        std::cout << sum_array_elements(integers, length) << std::endl;
    }
}