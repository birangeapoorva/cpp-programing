#include <iostream>
using namespace std;
class Shape
{
public:
 virtual void area()
    {
 cout << "Area of Shape" << endl;
 }
};
class Circle : public Shape
{
public:
 float r;
Circle(float x)
    {
 r = x;
    }
 void area() override
    {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape
{
public:
    float l, b;

    Rectangle(float x, float y)
    {
        l = x;
        b = y;
    }

    void area() override
    {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

int main()
{
    Circle c(10.5);
    Rectangle r(10, 5);

    Shape *s;

    s = &c;
    s->area();

    s = &r;
    s->area();

    return 0;
}RU
