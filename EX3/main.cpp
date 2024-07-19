#include <iostream>

int main() {
    int num = 65;
    double pi = 3.14159;
    char c = 'c';

    c = num;
    num = pi;

    std::cout <<"The value of num is: " << num << std::endl;
    std::cout <<"The value of pi is: " << pi << std::endl;
    std::cout <<"The value of c is: " << c << std::endl;

}