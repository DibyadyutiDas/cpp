#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Derived class 2
class Labrador : public Dog {
public:
    void display() {
        cout << "Labrador is a type of dog." << endl;
    }
};

int main() {
    Labrador labrador;
    labrador.eat();   // Accessing base class member function
    labrador.bark();  // Accessing derived class member function
    labrador.display();  // Accessing derived class member function

    return 0;
}