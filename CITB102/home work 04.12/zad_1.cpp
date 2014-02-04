#include <iostream>
using  namespace  std;
int main()

{
    int count=0, i=0;
    double sum=0, b=0;
    cout << "How numbers: "<< endl;
    cin >> count;
     while (i < count)
     {
        cout << "Enter number: ";
        cin >> b;
        sum+=b;
        i++;
     }
cout << sum / count;

// system ("pause");

return 0;
}
