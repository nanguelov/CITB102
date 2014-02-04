#include <iostream>
using namespace std;
int main()

{
    double ownership=0, bank_assets=0, your_assets=0;
    int assets;
    cout << "Enter your ownership in KTB: ";
    cin >> ownership;
    if (ownership <0 )
        {
        cout << "You can't own less than 0%";
        }
    else if (ownership > 100 )
        {
       cout << "You can't own more than 100%";
        }

    else if (ownership < 100 )
        {
    bank_assets = 58000000;
    your_assets = ownership / 100;
    assets = bank_assets * your_assets;
     cout << "You have " << your_assets << " shares or " << assets<< endl;
        }
return 0;
}
