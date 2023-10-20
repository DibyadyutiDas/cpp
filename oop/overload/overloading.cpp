//* overloading constructor

#include<iostream>
using namespace std;

class pizza{
    public:
    string topping1,topping2;

    pizza()
    {

    }
    pizza(string topping1)
    {
        this->topping1 = topping1;
    }
    pizza(string topping1,string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main()
{
    pizza pizza1;
    pizza pizza2("pepperoni");
    pizza pizza3("pepperoni","mushroom");
    

    cout << "Here is your "<< pizza2.topping1 <<" pizza\n";
    cout << "Here is your "<< pizza3.topping1 << " and " << pizza3.topping2 <<" pizza\n";
    
    return 0;
}