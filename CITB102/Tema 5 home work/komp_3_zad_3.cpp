#include <iostream>

using namespace std;

int main()
{
    char operation;
    double num1=0, num2=0;
    cout <<"Enter operation (+/-/x/:) ";
    cin >> operation;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    if (operation=='+')
    {
        cout<< num1 << " + " << num2 << " = " << num1+num2 << endl;
    }
    else if (operation == '-')
    {
    cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
    }
     else if (operation == 'x')
    {
    cout << num1 << " x " << num2 << " = " << num1*num2 << endl;
    }
     else if (operation == ':')
    {
    cout << num1 << " : " << num2 << " = " << num1/num2 << endl;
    }

return 0;
}
