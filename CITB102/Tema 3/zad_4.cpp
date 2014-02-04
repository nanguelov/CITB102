#include <iostream>

using namespace std;

int main()
{
    double price=0;
    cout << "Enter price of something(lv.): ";
    cin >> price;
    double amount=0;
    cout << "Enter amount(lv.): ";
    cin >> amount;
    double change=amount-price;

    cout << "Your change is "<< change<<" lv. (" << change*100 << "st.)"<< endl;

return 0;
}
