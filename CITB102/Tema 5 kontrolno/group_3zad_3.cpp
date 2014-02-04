#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Enter name of employee: ";
    cin >> name;
    double hourly_wage=0;
    cout << "Enter his hourly wage: ";
    cin >> hourly_wage;
    double week_salary=0;
    double extra_hours=0;
    if (hourly_wage < 0)
    {
        cout << "You can't have negative salary!"<<endl;
        return 1;
    }
    else
    {
        int week_hours=0;
        cout << "Enter how many hours the employee has worked last week: ";
        cin >> week_hours;
        if ((week_hours < 0)||(week_hours > 168))
        {
            cout << "You can`t have that hours"<< endl;
            return 1;
        }
        else if (week_hours > 42)
            {
                extra_hours = (week_hours-42)*1.1;
                extra_hours = extra_hours * hourly_wage;
            }
        week_hours=42;
        week_salary = week_hours * hourly_wage+extra_hours;

    }
    cout << "The salary of "<< name <<" for the last week is "<< week_salary << " BGN."<< endl;
return 0;
}
