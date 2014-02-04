#include <iostream>

using namespace std;

int main()
{
    double our_assets=0;
    int bank_assets = 72000000;
    cout << "Enter your assets: ";
    cin >> our_assets;
    if (our_assets > 1)
    {
        cout << "You can't own more than 100%"<< endl;
    }
    else if (our_assets < 0 )
    {
        cout << "You can't own less than 0%"<< endl;
    }

 else
    bank_assets= bank_assets * our_assets;
    our_assets = our_assets *100;
    cout << "You have "<<our_assets<<"% shares or "<<bank_assets <<" BGN."<< endl;

return 0;
}
