#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> p1(new int(5));

    std::unique_ptr<int> p2 = std::move(p1);

    if (p1) {
        std::cout << "p1 owns the object" << std::endl;
    } else if (p2){
        std::cout << "p2 owns the object" << std::endl;
    }

    return 0;
}