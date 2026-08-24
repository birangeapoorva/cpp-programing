#include <iostream>
using namespace std;
class Complex
{
float real, imag;
public:
void getData()
{
cout << "Enter real part: ";
 cin >> real;
cout << "Enter imaginary part: ";
 cin >> imag;
 }
void add(Complex c)
    {
 Complex result;
result.real = real + c.real;
result.imag = imag + c.imag;
cout << "Addition = " << result.real
 << " + " << result.imag << "i" << endl;
}
 void subtract(Complex c)
    {
 Complex result;
result.real = real - c.real;
result.imag = imag - c.imag;
 cout << "Subtraction = " << result.real
<< " + " << result.imag << "i" << endl;
}
};
int main()
{
 Complex c1, c2;
cout << "Enter first complex number:\n";
c1.getData();
