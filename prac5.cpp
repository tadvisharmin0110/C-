
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
      string name;
      int marks;
      static int studentCount;

public:
      // Constructor
      Student(string name, int marks)
      {
            this->name = name;
            this->marks = marks;
            studentCount++;
      }

      // Inline function
      inline void display()
      {
            cout << "Student Name: " << name << endl;
            cout << "Marks: " << marks << endl;
      }

      // Static member function
      static void displayCount()
      {
            cout << "Total Students: " << studentCount << endl;
      }

      // Friend class declaration
      friend class Result;
};

// Initialize static data member
int Student::studentCount = 0;

// Friend class
class Result
{
public:
      void displayResult(Student s)
      {
            cout << "Result Analysis" << endl;
            cout << "Student: " << s.name << endl;
            cout << "Marks: " << s.marks << endl;

            if (s.marks >= 40)
                  cout << "Result: Pass" << endl;
            else
                  cout << "Result: Fail" << endl;
      }
};

int main()
{
      Student s1("Rahul", 85);
      Student s2("Priya", 35);

      cout << "Student 1 Details" << endl;
      s1.display();

      cout << "\nStudent 2 Details" << endl;
      s2.display();

      cout << endl;
      Student::displayCount();

      Result r;
      cout << endl;
      r.displayResult(s1);

      cout << endl;
      r.displayResult(s2);

      return 0;
}
