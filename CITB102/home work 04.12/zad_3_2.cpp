#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int calc_percentage(int rating)
{
	int percentage = 0;
	switch (rating)
	{
	case 2: percentage = 0; break;
	case 3: percentage = 25; break;
	case 4: percentage = 50; break;
	case 5: percentage = 75; break;
	case 6: percentage = 100; break;
	}

	return percentage;
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

		cout << f_numb << '\t' << calc_percentage(rating) << "%\n";
	}
	while (cin.good());

	return 0;
}
