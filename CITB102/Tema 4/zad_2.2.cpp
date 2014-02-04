#include <iostream>

using namespace std;

int main()
{
   double num1=0, num2=0, num3=0, big_num=0;
   cout << "Enter 3 numbers: ";
   cin >> num1 >> num2 >> num3;
   if (num1>num2)
   {
       big_num=num1;
   }
    else if (num2>num3)
    {
        big_num=num2;
    }
    else if (num1<num3)
    {
    big_num=num3;
    }

cout << "The largest number is "<< big_num;

return 0;
}
