#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num=0;
    cout << "Enter your number: ";
    cin >> num;
    cout <<num << "^2=" << pow(num, 2)<<", "<<num << "^3=" << pow(num, 3)<< ", " <<num << "^4=" << pow(num, 4)
    <<", "<< num << "^5=" << pow(num, 5);


    return 0;
}
