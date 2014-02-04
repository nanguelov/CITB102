#include <iostream>

using namespace std;

int main()
{
    int tank=0;
    cout << "Enter a tank size: ";
    cin >> tank;
    double efficiency=0;
    cout << "Enter fuel efficiency (km per liter):";
    cin >> efficiency;
    double price=0;
    cout << "Enter price per liter: ";
    cin >> price;
    cout << "We can travel "<< tank*efficiency<< endl;
    cout << "For every 100km it will cost "<< price*efficiency<< endl;

return 0;
}
