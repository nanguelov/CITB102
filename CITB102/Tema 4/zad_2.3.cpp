#include <iostream>

using namespace std;

int main()
{
   char rating, sing;
   int a=4, b=3, c=2, d=1, f=0;
   const double value= 0.3;
 cout << "Enter rating (a, b, c, d, f): ";
 cin >> rating;
 cout << "Enter sing (+/-): ";
 cin >> sing;
 if (rating== 'a'&& sing == '+') cout<< "4";
 if (rating== 'f'&& sing == '-') cout<< "0";
 if (rating == 'a' && sing== '-')cout << a-value;
 if (rating == 'b' && sing== '+')cout << b+value;
 if (rating == 'b' && sing== '-')cout << b-value;
 if (rating == 'c' && sing== '+')cout << c+value;
 if (rating == 'c' && sing== '-')cout << c-value;
 if (rating == 'd' && sing== '+')cout << d+value;
 if (rating == 'd' && sing== '-')cout << d-value;
 if (rating == 'f' && sing== '+')cout << f+value;

return 0;
}
