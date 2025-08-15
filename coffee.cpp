#include<iostream>
#include<string>
using namespace std;
int main()
{
    bool power=false;
    string powerchoice;
    int coffee;

    cout<<"Enter yes to power on:\n";
    cin>>powerchoice;

    if(powerchoice=="yes")
    {
        power=true;
    }
    while(power)
    {
        cout<<"Enter num 1 to 3 to order mocha,latte,expresso\n";
        cin>>coffee;
        switch (coffee)
        {
        case 1:
            cout<<"Adding chocolate powder\n";

        case 2:
            cout<<"Adding frothed milk\n";

        case 3:
            cout<<"Adding hot coffee\n";
            cout<<"Enjoy your coffee\n";
            break;
        default:
            cout<<"Enter a number between 1 to 3\n";
            break;
        }
        string poweroff;
        cout<<"Enter 'yes' to order again and 'no' to poweroff\n";
        cin>>poweroff;
        if(poweroff=="no")
        {
            power=false;
            cout<<"Powering off\n";
        }
    }
}