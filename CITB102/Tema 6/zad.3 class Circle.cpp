#include <iostream>
#include <string>

using namespace std;
const double PI = 3.14159;
class Circle
{
private:
    double r;
public:
    Circle(double radius): r(radius)
    {
    }

    double get_radius()
    {
        return r;
    }

    double get_perimeter()
    {
        double perimeter = 2 * PI * r;
        return perimeter;  //for homework
    }
    double get_area()
    {
        double area = PI * r * r;
        return area;
    }
};

int main()
{
    double radius;
    cin >> radius;

    Circle c(radius);

    cout << c.get_radius() << endl;
    cout << c.get_perimeter() << endl;
    cout << c.get_area()<< endl;//for homework

    return 0;
}
