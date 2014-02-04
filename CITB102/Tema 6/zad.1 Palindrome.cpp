#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	cin >> input;

	bool palyndrome=true;
	for (int i=0; i<input.size()/2;i++)
	{
		int index = input.size()-1-i;

		if (input[i] != input[index])
		{
			palyndrome = false;
			break;
		}
	}

	if (palyndrome)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}	

	system("pause");
	return 0;
}