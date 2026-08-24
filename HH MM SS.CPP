#include <iostream>
using namespace std;

class Time
{
    int hh, mm, ss;

public:
    void getTime()
    {
        cout << "Enter hours: ";
        cin >> hh;
        cout << "Enter minutes: ";
        cin >> mm;
        cout << "Enter seconds: ";
        cin >> ss;
    }

    void addTime(Time t)
    {
        Time result;

        result.ss = ss + t.ss;
        result.mm = mm + t.mm + result.ss / 60;
        result.ss = result.ss % 60;
result.hh = hh + t.hh + result.mm / 60;
        result.mm = result.mm % 60;

        cout << "Total Time = "
             << result.hh << ":"
             << result.mm << ":"
             << result.ss << endl;
    }
};

int main()
{
    Time t1, t2;

    cout << "Enter first time:\n";
    t1.getTime();

    cout << "\nEnter second time:\n";
    t2.getTime();

    t1.addTime(t2);

    return 0;
}
