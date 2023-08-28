#include <iostream>

class MyClass {
public:
    void sayHello() {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.sayHello();
    
    return 0;
}