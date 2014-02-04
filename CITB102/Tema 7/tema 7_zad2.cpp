#include <iostream>
using namespace std;
int main()
{
	int min_number, max_number, numbers;

	while (cin >> numbers)
	{
         if(numbers > max_number)
            max_number = numbers;

        if(numbers < min_number)
            min_number = numbers;
	}
	cout << min_number << "  "<< max_number;

	// system ("pause")
	return 0;
}
