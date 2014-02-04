#include <iostream>
#include <string>
using namespace std;

int main()
{
    string employee;
    cout << "Enter employee: ";
    cin >> employee;
    double hourly_wage=0;
    cout << "Enter his hourly wage: ";
    cin >> hourly_wage;
    if (hourly_wage < 0)
    {
        cout << "You can't have negative salary!"<< endl;
    }
    else
    {
    int week_hours=0, extra_hours=0;
    cout << "Enter how many hours the employee has worked last week:";
    cin >> week_hours;

    if (week_hours < 0)
    {
        cout << "You can`t have that hours" << endl;
        return 1;
    }
    else if (week_hours > 168)
    {
         cout << "You can`t have that hours"<< endl;
         return 1;
    }
    if (week_hours > 40)
    {
        extra_hours=(week_hours-40)*1.5;
        extra_hours= extra_hours * hourly_wage;
    }
    double week_salary=0;
    week_hours=40;
    week_salary = week_hours * hourly_wage + extra_hours;
    cout << "The salary of "<< employee << " for the last week is "<< week_salary<<" BGN"<< endl ;
    }
return 0;
}
