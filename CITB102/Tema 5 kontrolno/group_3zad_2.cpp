#include <iostream>

using namespace std;

int main()
{
    const int bank=68000000;
    int my_money1=0, my_money2=0;
    cout << "Enter ownership in KTB: ";
    cin >> my_money1 >> my_money2;
    if (my_money1>1)
    {
        cout << "You can't own more than 100%" << endl;
    }
    else if (my_money1 < 1)
    {
        cout << "You can't own less than 0%" << endl;
    }
    else
        {
    int our_money = bank / my_money2;
    cout << "You have " << 100 / my_money2 << "% shares or "<< our_money <<" BGN."<< endl;
        }
return 0;
}
