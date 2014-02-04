#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3;
    cout << " Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if (num1==num2)
    {
        cout << "There are duplicate number: " << num1<< endl;
    }
    else if (num2==num3)
    {
        cout << "There are duplicate number: " << num2<< endl;
    }
    else if (num1==num3)
    {
        cout << "There are duplicate number: " << num3<< endl;
    }
    else cout << "There aren't duplicates"<< endl;

return 0;
}
