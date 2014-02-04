#include <iostream>

using namespace std;

int main()
{
    string drive, path, file_name;
    cout << "Enter drive letter: ";
    cin>> drive;
    cout << "Enter path: ";
    cin >> path;
    cout << "Enter file name: ";
    cin >> file_name;
    cout << drive<<":/" << path << "/"<< file_name <<endl;

return 0;
}
