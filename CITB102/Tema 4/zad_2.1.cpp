// carts

#include <iostream>
using namespace std;
int main()
{
    string carts, color;
    cout << "Enter carts: ";
    cin >> carts;
    cout << "Enter color: ";
    cin >> color;
    if (carts=="a")  cout << "Ace";
    else if (carts=="j")  cout << "Jack";
    else if (carts=="q")  cout << "Queen";
    else if (carts=="k")  cout << "King";
    if (carts=="2") cout << "Two";
    else if (carts=="3") cout << "Three";
    else if (carts=="4") cout << "Four";
    else if (carts=="5") cout << "Five";
    else if (carts=="6") cout << "Six";
    else if (carts=="7") cout << "Seven";
    else if (carts=="8") cout << "Eight";
    else if (carts=="9") cout << "Nine";
    else if (carts=="10") cout << "Ten";
    if (color=="d") cout << " of Diamonds";
    else if (color=="h")  cout << " of Hearts";
    else if (color=="s")  cout << " of Spades";
    else if (color=="c")  cout << " of Clubs";

return 0;

}
