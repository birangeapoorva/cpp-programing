#include <iostream>
using namespace std;

class Product
{
    int productID;
    string name;
    float price;

public:
    // Default Constructor
    Product()
    {
        productID = 0;
        name = "Unknown";
        price = 0;
    }

    // Constructor with Product ID
    Product(int id)
    {
        productID = id;
        name = "Unknown";
        price = 0;
    }

    // Constructor with ID, Name and Price
    Product(int id, string n, float p)
    {
        productID = id;
        name = n;
        price = p;
    }

    void display()
    {
        cout << "Product ID: " << productID << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Product p1;
    Product p2(101);
    Product p3(102, "Laptop", 55000);

    cout << "Default Constructor:" << endl;
    p1.display();

    cout << "\nConstructor with Product ID:" << endl;
    p2.display();

    cout << "\nParameterized Constructor:" << endl;
    p3.display();

    return 0;
}
