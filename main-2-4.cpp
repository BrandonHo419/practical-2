#include <iostream>

extern int sum_min_max(int integers[], int length);
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);

int main() {
    int integers[] = {1, 2, 3, 4, 5, 7};
    int length = sizeof(integers)/sizeof(integers[0]);


    array_min(integers, length);
    array_max(integers, length);
    std::cout << sum_min_max(integers, length) << std::endl;
}