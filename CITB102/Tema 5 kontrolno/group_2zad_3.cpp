#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    double hour_wage=0;
    int week_hours=0;
    double extra_bonus=0;
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter his hourly wage: ";
    cin >> hour_wage;

    if ( hour_wage < 0 )cout << "You can't have negative salary!";

    else if ( hour_wage > 0)
    {
    cout << "Enter how many hours the employee has worked last week: ";
    cin >> week_hours;
    if (week_hours < 0)
    {
         cout << "You can`t have that hours"<< endl;
         return 1;
    }
    else if (week_hours> 168)
    {
        cout << "You can`t have that hours"<< endl;
        return 1;
    }
    else if (week_hours> 36)
    {
        extra_bonus=(week_hours-36)*1.4;
        extra_bonus=extra_bonus*hour_wage;
    }
    double week_salary=0;
    week_hours=36;
    week_salary = week_hours * hour_wage + extra_bonus;
    cout << "The salary of "<< name << " for the last week is "<< week_salary<<" BGN"<< endl ;
    }

return 0;
}
