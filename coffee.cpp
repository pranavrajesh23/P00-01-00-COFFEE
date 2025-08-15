#include<iostream>
#include<string>
using namespace std;
int main()
{
    int power;
    cout<<"Enter 1 to power on\n";
    cin>>power;
    int n;
    cout<<"which coffee do you want?\n";
    cin>>n;
    while(power==1)
    {
        switch (n)
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
        int poweroff;
        cout<<"Enter 1 to order again and 0 to poweroff\n";
        cin>>poweroff;
        if(poweroff==0)
        {
            power=0;
            cout<<"Powering off\n";
        }
    }
}