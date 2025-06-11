#include <iostream>

int main() {
    int a, *p, **o;
    a = 10;
    p = &a;
    std::cout << p << std::endl;      // prints address of a
    o = &p;
    std::cout << &p << std::endl;     // prints address of p
    std::cout << &o << std::endl;     // prints address of o
    return 0;
}