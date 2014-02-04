#include <iostream>
#include <string>
using namespace std;

int main()


{

cout << "Please enter your full name (first middle last): ";
    string fn, mn, ln;
    cin >> fn;
    cin >> mn;
    cin >> ln;
    string initials = fn.substr(0, 1) + mn.substr(0, 1) + ln.substr(0, 1);

    char sex;
    cout << "Enter your sex : (m/f)";
	cin >> sex;
	if (sex=='m')  cout << "Mr.";
    else if (sex=='f')  cout << "Mrs.";

    cout <<' '<< ln << ", your initials are " << initials << endl;

    return 0;

}
