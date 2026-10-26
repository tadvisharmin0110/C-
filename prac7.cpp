#include <iostream>
using namespace std;

// Base class
class Student
{
public:
      // Virtual function
      virtual void display()
      {
            cout << "Student Details" << endl;
      }
};

// Derived class 1
class AIMLStudent : public Student
{
public:
      void display() override
      {
            cout << "Branch: Artificial Intelligence and Machine Learning" << endl;
      }
};

// Derived class 2
class DataScienceStudent : public Student
{
public:
      void display() override
      {
            cout << "Branch: Data Science" << endl;
      }
};

int main()
{
      Student *ptr;

      Student s;
      AIMLStudent a;
      DataScienceStudent d;

      cout << "Runtime Polymorphism" << endl;

      ptr = &s;
      ptr->display();

      ptr = &a;
      ptr->display();

      ptr = &d;
      ptr->display();

      return 0;
}