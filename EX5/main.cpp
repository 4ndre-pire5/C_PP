#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> p1(new int(5));
    
    std::unique_ptr<int> p2 = std::make_unique<int>(10); // C++14

    std::cout << *p1 << ", " << *p2 << std:: endl;

    return 0;
}