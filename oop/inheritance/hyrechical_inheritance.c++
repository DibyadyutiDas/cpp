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
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};

// Derived class 3
class Cow : public Animal {
public:
    void moo() {
        cout << "Cow is mooing." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    Cow cow;

    dog.eat();
    dog.bark();

    cat.eat();
    cat.meow();

    cow.eat();
    cow.moo();

    return 0;
}