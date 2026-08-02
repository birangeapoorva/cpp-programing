#include <iostream>
using namespace std;

void swapNumbers(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "Inside function:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swapNumbers(a, b);

    cout << "After function call:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
