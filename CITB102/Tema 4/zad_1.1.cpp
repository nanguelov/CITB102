#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string firts_name, last_name, f_number;
    cout << "Enter firts name: ";
    cin >> firts_name;
    cout << "Enter last name: ";
    cin >> last_name;
    cout << "Enter faculty number: ";
    cin >> f_number;
    double rating1=0, rating2=0, rating3=0;
    cout << "Enter 3 ratings (2-6): ";
    cin >> rating1;
    cin >> rating2;
    cin >> rating3;
    double success = (rating1 + rating2 + rating3)/3;
    cout << setw(10) << "Faculty No." << setw(5) <<  "Result" << endl;
    cout << setw(10) << f_number << setw(5) << setprecision (2)<< success << endl;
return 0;
}
