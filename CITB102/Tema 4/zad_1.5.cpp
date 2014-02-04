#include <iostream>
#include <string>

using namespace std;
int main()
{
    string first_name, middle_name, last_name, sex, initials;
    cout <<"Enter your first name: ";
    cin >> first_name;
    cout << "Enter your middle name: ";
    cin >> middle_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    cout << "Enter your sex (m/f): ";
    cin >> sex;
    initials = first_name.substr(0, 1) + middle_name.substr(0, 1) + last_name.substr(0, 1);

    if (sex=="m")
    {
        cout<< "Mr."<<last_name<< ", your initials are "<< initials<< endl;
    }
    else if (sex=="f")
    {
        cout << "Mrs." << last_name << ", your initials are " << initials<< endl;
    }
    else cout << "Wrong sex.";

return 0;
}
