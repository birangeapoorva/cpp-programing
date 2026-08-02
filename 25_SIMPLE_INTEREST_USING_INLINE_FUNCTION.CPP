#include <iostream>
using namespace std;

inline float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float principal, rate, time;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter rate of interest: ";
    cin >> rate;

    cout << "Enter time: ";
    cin >> time;

    cout << "Simple Interest = "
         << simpleInterest(principal, rate, time);

    return 0;
}
