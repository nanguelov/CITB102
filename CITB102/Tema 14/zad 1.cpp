#include <iostream>
#include <string>
using namespace std;

bool compare(string& str1, string& str2)
{
    if (str1.size()!= str2.size()) return false;

    for (int i=0; i < str1.size(); i++)
    {
        if(tolower(str1[i])!= tolower(str2[i]))
            return false;
    }
    return true;
}

int main()
{
string str1, str2;
while (cin>> str1>> str2)
{
    if (compare(str1, str2)) cout << "YES" << endl;
    else cout << "NO"<< endl;
}

return 0;
}
