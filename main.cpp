#include <iostream>
#include <list>
#include "List.cpp"
#include "Map.cpp"


int main() {
    std::list<int> list = {1, 2, 3, 4, 5};
    std::list<int> list2 = kehrt(list);
    for (int element : list2) {
        std::cout << element << " ";
    }


    return 0;
}
