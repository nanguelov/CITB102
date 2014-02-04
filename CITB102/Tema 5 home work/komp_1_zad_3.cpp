#include <iostream>
#include <string>
using namespace std;

int main()
{
    string operation;
    double num1=0, num2=0;
    cout <<"Enter operation(a/s/m/p): ";
    cin >> operation;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    if (operation=="a")
    {
        cout<< num1 << " + " << num2 << " is " << num1+num2 << endl;
    }
    else if (operation == "s")
    {
    cout << num1 << " - " << num2 << " is " << num1-num2 << endl;
    }
     else if (operation == "m")
    {
    cout << num1 << " * " << num2 << " is " << num1*num2 << endl;
    }
     else if (operation == "p")
    {
    cout << num1 << " / " << num2 << " is " << num1/num2 << endl;
    }

return 0;
}
