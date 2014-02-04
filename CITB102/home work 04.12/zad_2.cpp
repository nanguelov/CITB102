#include <iostream>

#include <string>

using namespace std;

int print_max_number(int num)
{
	int max = 0;

	while (num)
	{
		int temp = num % 10;
		num /= 10;

		if (temp > max)
		{
			max=temp;
		}
	}

	return max;
}


int main()
{

	int num;
	cin >> num;

	cout << print_max_number(num) << endl;

	// system("pause");
	return 0;
}
