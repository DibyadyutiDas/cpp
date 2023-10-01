//* abstraction
//*getter
//*setter

#include<iostream>
using namespace std;

class Stove{
    private:
    int temperature = 0;

    public:
    Stove(int temperature)
    {
        setTemperature(temperature);
    }
    int getTemperature()
    {
        return temperature;
    }
    void setTemperature(int temperature)
    {
        if (temperature < 0)
        {
            this->temperature = 0;
        }
        else if (temperature >= 100)
        {
            this->temperature = 100;
        }
        else
        {
            this->temperature = temperature;   
        }
    }
};

int main()
{
    Stove stove(0);
    
    // stove.setTemperature(10000);

    // stove.temperature = 1000000;

    cout << "The temperature = " << stove.getTemperature() << '\n';

    return 0;
}