#include <iostream>

// Base class 1
class Base1 {
public:
    void display1() {
        std::cout << "Base1 class" << std::endl;
    }
};

// Base class 2
class Base2 {
public:
    void display2() {
        std::cout << "Base2 class" << std::endl;
    }
};

// Derived class inheriting from Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void display3() {
        std::cout << "Derived class" << std::endl;
    }
};

int main() {
    Derived obj;
    obj.display1(); // Accessing member of Base1
    obj.display2(); // Accessing member of Base2
    obj.display3(); // Accessing member of Derived
    return 0;
}