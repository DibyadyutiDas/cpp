//* inheritance

#include<iostream>
using namespace std;

class Animal{
    public:
        bool alive = true;

    void eat()
    {
        cout << "This animal is eating \n";
    }
};

class Dog : public Animal{
    public:
    bark()
    {
        cout << "The dog goes woof\n";
    }
};

class Cat : public Animal{
    public:
    void meow()
    {
        cout << "The cat goes meow\n";
    }
};

int main()
{
    Dog dog;
    Cat cat;
    
    cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    cout << cat.alive << '\n';
    cat.eat();
    cat.meow();

    return 0;
}