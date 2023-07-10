#include<iostream>
#include<iomanip> //* for two pressison point
using namespace std;

void show_balance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 2.65;
    int choice;

    do
    {       
        cout << " Enter the number according to your choice" << endl;
        cout << "*******************************************" << endl;
        cout << "1. Show balance" << endl;
        cout << "2. Deposit money " << endl;
        cout << "3. Withdraw money" << endl;
        cout << "4. Exit" << endl;

        cout << "\nEnter your choice - ";
        cin >> choice;
        cout << endl;

        cin.clear();    //* most imp. ex- enter pizza without this = infinity loop
        fflush(stdin);  //* most imp. ex- enter pizza without this = infinity loop

        switch (choice)
        {
        case 1:
            show_balance(balance);
            break;
        case 2:
            balance += deposit();
            show_balance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            show_balance(balance);
            break;
        case 4:
            cout << "Thanks for visiting " << (char)1 << endl << endl;
            break;
        
        default:
            cout << "Not a valid input " << endl;
            break;
        }
    } while (choice != 4);
    
    return 0;
}

void show_balance(double balance)
{
    cout << "Your balance = $" << setprecision(2) << fixed << balance << endl << endl; //* show 2  decimal value
}

double deposit()
{
    double amount;

    cout << "Enter amount to be deposit - ";
    cin >> amount;
    cout << endl;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        cout << "Not a valid amount " << endl;
        return 0;
    }
}

double withdraw(double balance)
{
    double amount;

    cout << "Enter the amount to withdraw - ";
    cin >> amount;
    cout << endl;

    if (amount <= 0)
    {
        cout << "Not a valid amount " << endl;
        return 0;
    }
    else if(amount > balance)
    {
        cout << "Insufficent balance " << endl;
        return 0;
    }
    else
    {
        return amount;
    }
}