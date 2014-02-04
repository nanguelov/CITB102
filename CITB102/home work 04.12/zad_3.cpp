#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void modify(string& str, int rating)
{
	if (rating == 2) cout << str << "\t 0%" << endl;
	else if (rating == 3) cout << str << "\t 25%" << endl;
	else if (rating == 4) cout << str << "\t 50%" << endl;
	else if (rating == 5) cout << str << "\t 75%" << endl;
	else if (rating == 6) cout << str << "\t 100%" << endl;
}

int main()
{
	string f_numb;
	int rating;
    cout << "Enter faculty number and rating: " << endl;
	do
	{
		cin >> f_numb;

		if (f_numb == "exit")
		{
			break;
		}
		cin >> rating;
		if (rating < 2)
        {
            cout << "Error!!! Try again, rating??? ";
            cin >> rating;
        }

		modify(f_numb, rating);
	}
	while (cin.good());



	return 0;
}
