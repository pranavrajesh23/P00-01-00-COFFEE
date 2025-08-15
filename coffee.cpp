#include<iostream>
#include<string>
using namespace std;
enum CoffeeType{Mocha,Latte,Expresso,Invalid};

bool powerChoice()
{
    string choice;
    cout<<"Do you want to turn on?(yes/no)\n";
    cin>>choice;
    return (choice=="yes");
}

bool powerOff()
{
    string poweroff;
        cout<<"\nDo you want to power off?(yes/no)\n";
        cin>>poweroff;
        return (poweroff=="yes");
}
CoffeeType getCoffee(const string &coffeename)
{
    if(coffeename=="mocha" || coffeename=="Mocha"){return Mocha;}
    if(coffeename=="latte"|| coffeename=="Lattee"){return Latte;}
    if(coffeename=="expresso"|| coffeename=="Expresso"){return Expresso;}
    return Invalid;
}
int main()
{
    // bool power=false;
    // string powerchoice;
    string coffeeGet;

    // cout<<"Enter 'on' to power on:\n";
    // cin>>powerchoice;

    if(powerChoice())
    {
        bool power=true;
    while(power)
    {
        cout<<"\nEnter coffee type (mocha,latte,expresso)\n";
        cin>>coffeeGet;

        CoffeeType coffee=getCoffee(coffeeGet);
        switch (coffee)
        {
        case Mocha:
            cout<<"\nAdding chocolate powder.\n";

        case Latte:
            cout<<"Adding frothed milk.\n";

        case Expresso:
            cout<<"Adding hot coffee.\n\n";
            if(coffee==Mocha){cout<<"Enjoy your Mocha.\n";}
            else if(coffee==Latte){cout<<"Enjoy your Lattee.\n";}
            else{cout<<"Enjoy your Expresso.\n";}
            break;
        default:
            cout<<"\nInvalid Coffee Type. Enter again.\n";
            break;
        }
        if(powerOff())
        {
            power=false;
        }
    }
}
    cout<<"\nPowering off\n";
    return 0;
}