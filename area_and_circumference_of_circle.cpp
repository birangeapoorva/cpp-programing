#include <iostream>
using namespace std;

int main()
{
    float radius, area, circumference;
    float pi = 3.14159;

    cout << "Enter radius: ";
    cin >> radius;

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference;

    return 0;
}
