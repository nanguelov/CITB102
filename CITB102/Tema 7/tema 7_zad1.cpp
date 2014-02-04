#include <iostream>


using namespace std;
int main()

{
    int n=0;
    double num=0, sum=0;
    cout << "Enter how many number: ";
    cin >> n;
    for (int i=0; i < n; i++)
    {
        cout << "Enter your number: ";
        cin >> num;
        sum+=num;
    }
    cout << "Your sum is: "<< sum;

return 0;
}
