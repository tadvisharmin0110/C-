
#include <iostream>
#include <string>
using namespace std;

// Class template
template <typename T>
class Student
{
private:
      string name;
      T marks;

public:
      Student(string n, T m)
      {
            name = n;
            marks = m;
      }

      void display()
      {
            cout << "\n--- Student Details ---" << endl;
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
      }
};

// Function template
template <typename T>
T findGreater(T a, T b)
{
      if (a > b)
            return a;
      else
            return b;
}

int main()
{
      string name;
      double marks;
      double a, b;

      cout << "Enter student name: ";
      getline(cin, name);

      cout << "Enter student marks: ";
      cin >> marks;

      Student<double> s(name, marks);
      s.display();

      cout << "\nEnter two numbers: ";
      cin >> a >> b;

      cout << "Greater number: "
           << findGreater(a, b) << endl;

      return 0;
}
