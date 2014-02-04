#include <iostream>
using namespace std;
int main()
{
    double meters=0;

    cout << "Enter your meters: ";
    cin >> meters;
    cout << meters << " m = " << meters/1000 << " km"<< endl;
    cout << meters << " m = " << meters*10 << " dm"<< endl;
    cout << meters << " m = " << meters*100 << " cm"<< endl;

	return 0;
}
