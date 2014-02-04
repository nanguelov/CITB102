#include <iostream>
using namespace std;
int main()
{

	int numb, sec_numb;
	cout << "Enter your first  number: ";
	cin >> numb;
	cout << "Enter your second number: ";
	cin >> sec_numb;

	if (numb==1) cout << "one";
	else if (numb==2) cout << "two";
	else if (numb==3) cout << "three";
	else if (numb==4) cout << "four";
	else if (numb==5) cout << "five";
	else if (numb==6) cout << "six";
	else if (numb==7) cout << "seven";
	else if (numb==8) cout << "eight";
	else if (numb==9) cout << "nine";

	if (sec_numb==1) cout << " plus one ";
	else if (sec_numb==2) cout << " plus two ";
	else if (sec_numb==3) cout << " plus three ";
	else if (sec_numb==4) cout << " plus four ";
	else if (sec_numb==5) cout << " plus five ";
	else if (sec_numb==6) cout << " plus six ";
	else if (sec_numb==7) cout << " plus seven ";
	else if (sec_numb==8) cout << " plus eight ";
	else if (sec_numb==9) cout << " plus nine ";

   int sum;
   sum = numb + sec_numb;
   cout << "is " << sum << endl;
	return 0;
}

