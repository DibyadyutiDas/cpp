#include<iostream>

using namespace std;

void pizza();
void pizza(string topping_1);
void pizza(string topping_1,string topping_2);

int main()
{
    pizza("pepperoni","mushroom");
    
    return 0;
}

void pizza()
{
    cout << "Here is your pizza";
}

void pizza(string topping_1)
{
    cout << "Here is your"<< topping_1 <<" pizza";
}

void pizza(string topping_1,string topping_2)
{
    cout << "Here is your "<< topping_1 << " and " << topping_2 <<" pizza";
}