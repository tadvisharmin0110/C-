#include <iostream>
using namespace std;

class Rectangle
{
private:
      int length;
      int breadth;

public:
      // Default Constructor
      Rectangle()
      {
            length = 5;
            breadth = 3;
            cout << "Default Constructor Called" << endl;
      }

      // Parameterized Constructor
      Rectangle(int l, int b)
      {
            length = l;
            breadth = b;
            cout << "Parameterized Constructor Called" << endl;
      }

      // Copy Constructor
      Rectangle(const Rectangle &r)
      {
            length = r.length;
            breadth = r.breadth;
            cout << "Copy Constructor Called" << endl;
      }

      // Member Function to Calculate Area
      void calculateArea()
      {
            cout << "Area = " << length * breadth << endl;
      }

      // Member Function to Calculate Perimeter
      void calculatePerimeter()
      {
            cout << "Perimeter = " << 2 * (length + breadth) << endl;
      }

      // Member Function to Display Dimensions
      void display()
      {
            cout << "Length = " << length << endl;
            cout << "Breadth = " << breadth << endl;
      }
};

int main()
{
      // Default Constructor
      Rectangle r1;

      cout << "\nRectangle 1:" << endl;
      r1.display();
      r1.calculateArea();
      r1.calculatePerimeter();

      // Parameterized Constructor
      Rectangle r2(10, 5);

      cout << "\nRectangle 2:" << endl;
      r2.display();
      r2.calculateArea();
      r2.calculatePerimeter();

      // Copy Constructor
      Rectangle r3(r2);

      cout << "\nRectangle 3 (Copied from Rectangle 2):" << endl;
      r3.display();
      r3.calculateArea();
      r3.calculatePerimeter();

      return 0;
}