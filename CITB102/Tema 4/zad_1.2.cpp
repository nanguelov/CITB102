#include <iostream>
#include <string>
using namespace std;
int main()
{
    string measure;
    double value=0;
    const double rad=57.29;
    cout << "Enter your value: ";
    cin >> value;
    cout << "Enter RADIAN or DEGREE (r/d): ";
    cin>> measure;
    if (measure=="r")
    {
        cout << "Your degree is: "<< value * rad << endl;
    }
    if (measure=="d")
    {
        cout << "You radians is : "<< value/ rad << endl;
    }

return 0;
}
