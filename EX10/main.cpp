#include <iostream>
#include <vector>
#include <list>
#include <map>

int main() {

    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);

    std::cout << "Vector contains:";
    for (int x : vec) {
        std::cout << ' ' << x;
    }

    std::cout << std::endl;

    std::list<int> lst = {1, 2, 3, 4, 5};
    lst.push_back(6);

    std::cout << "List contains:";
    for (int y : lst) {
        std::cout << ' ' << y;
    }

    std::cout << std::endl;

    std::map<std::string, int> m;

    m["one"] = 1;
    m["two"] = 2;

    std::cout << "Map contains:" << std::endl;
    for (const auto &pair : m) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }
}