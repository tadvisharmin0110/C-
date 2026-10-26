
#include <iostream>
using namespace std;

// 1. Single Inheritance
class Student
{
public:
      void displayStudent()
      {
            cout << "Student Details" << endl;
      }
};

class Marks : public Student
{
public:
      void displayMarks()
      {
            cout << "Marks: 85" << endl;
      }
};

// 2. Multilevel Inheritance
class Result : public Marks
{
public:
      void displayResult()
      {
            cout << "Result: Pass" << endl;
      }
};

// 3. Multiple Inheritance
class Attendance
{
public:
      void displayAttendance()
      {
            cout << "Attendance: 90%" << endl;
      }
};

class Report : public Marks, public Attendance
{
public:
      void displayReport()
      {
            cout << "Student Report Generated" << endl;
      }
};

// 4. Hierarchical Inheritance
class ScienceStudent : public Student
{
public:
      void displayScience()
      {
            cout << "Branch: Computer Science (AIML)" << endl;
      }
};

class EngineeringStudent : public Student
{
public:
      void displayEngineering()
      {
            cout << "Course: Engineering" << endl;
      }
};

// 5. Hybrid Inheritance
class Person
{
public:
      void displayPerson()
      {
            cout << "Person: Student" << endl;
      }
};

class Academic : virtual public Person
{
public:
      void displayAcademic()
      {
            cout << "Academic Record Available" << endl;
      }
};

class Technical : virtual public Person
{
public:
      void displayTechnical()
      {
            cout << "Technical Skills: C++" << endl;
      }
};

class AIMLStudent : public Academic, public Technical
{
public:
      void displayAIML()
      {
            cout << "Specialization: Artificial Intelligence and Machine Learning" << endl;
      }
};

int main()
{
      cout << "--- Single Inheritance ---" << endl;
      Marks m;
      m.displayStudent();
      m.displayMarks();

      cout << "\n--- Multilevel Inheritance ---" << endl;
      Result r;
      r.displayStudent();
      r.displayMarks();
      r.displayResult();

      cout << "\n--- Multiple Inheritance ---" << endl;
      Report rp;
      rp.displayMarks();
      rp.displayAttendance();
      rp.displayReport();

      cout << "\n--- Hierarchical Inheritance ---" << endl;
      ScienceStudent s;
      s.displayStudent();
      s.displayScience();

      EngineeringStudent e;
      e.displayStudent();
      e.displayEngineering();

      cout << "\n--- Hybrid Inheritance ---" << endl;
      AIMLStudent a;
      a.displayPerson();
      a.displayAcademic();
      a.displayTechnical();
      a.displayAIML();

      return 0;
}
