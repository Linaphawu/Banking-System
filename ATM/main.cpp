#include <iostream>

using namespace std;

int main()
{
    int pin;
    int password = 5898;
    int count = 0;
    double deposit = 0.0;
    double balance = 0.0;
    double withdraw = 0.0;
    int entry;
    bool IsTrue = true;
    do{
    cout<<"Welcome to Alive's Banking System"<<endl;
    cout<<"Enter your pin: "<<endl;
    cin>> pin;

    if(pin == password)
    {
        do
        {
            cout<<"Welcome to Alive's Banking System"<<endl;
            cout<<"1. Deposit"<<endl;
            cout<<"2. Withdraw"<<endl;
            cout<<"3. Check Balance"<<endl;
            cout<<"4. Exit"<<endl;
        cout<< "choose an option:" <<endl;
        cin>>entry;

        switch(entry)
        {
        case 1:
            cout<< "Deposit amount: "<<endl;
            cin>> deposit;
            balance = balance + deposit;
            break;
        case 2:
            if(balance <= 0)
            {
              cout<<"Insufficient funds, deposit money";
            }
            else
            {
              cout<<"Withdraw amount: "<<endl;
              cin>>withdraw;
              balance = balance - withdraw;
            }
            break;
        case 3:
            cout<<"Current balance R" <<balance <<endl;
            break;
        case 4:
            cout<<"Have a wonderful day!"<<endl;
            IsTrue = false;
            break;
        }
        }while(IsTrue != false);

    }
    else
    {
        count++;
        if (count == 50)
            IsTrue = false;
        else
            cout << "Incorrect pin! "<<endl;
    }

    }while(IsTrue != false);
    return 0;
}
