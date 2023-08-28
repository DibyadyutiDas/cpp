#include <iostream>

class MyClass {
public:
    // Default constructor
    MyClass() {
        std::cout << "Default constructor called" << std::endl;
    }

    // Parameterized constructor
    MyClass(int value) {
        std::cout << "Parameterized constructor called with value: " << value << std::endl;
    }
};

int main() {
    // Creating objects using constructors
    MyClass obj1; // Default constructor called
    MyClass obj2(10); // Parameterized constructor called with value: 10

    return 0;
}