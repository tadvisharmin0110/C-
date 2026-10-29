
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
protected:
      string name;
      int id;

public:
      Person(string n = "Student", int i = 0)
      {
            name = n;
            id = i;
            cout << "Person constructor called" << endl;
      }

      void displayPerson()
      {
            cout << "Name: " << name << endl;
            cout << "Student ID: " << id << endl;
      }

      ~Person()
      {
            cout << "Person destructor called" << endl;
      }
};

// 1. Single Inheritance
class Student : public Person
{
protected:
      string branch;

public:
      Student(string n, int i, string b)
          : Person(n, i)
      {
            branch = b;
            cout << "Student constructor called" << endl;
      }

      void displayStudent()
      {
            displayPerson();
            cout << "Branch: " << branch << endl;
      }

      ~Student()
      {
            cout << "Student destructor called" << endl;
      }
};

// 2. Multilevel Inheritance
class AcademicRecord : public Student
{
protected:
      float marks;

public:
      AcademicRecord(string n, int i, string b, float m)
          : Student(n, i, b)
      {
            marks = m;
            cout << "AcademicRecord constructor called" << endl;
      }

      void displayAcademic()
      {
            displayStudent();
            cout << "Marks: " << marks << endl;
      }

      ~AcademicRecord()
      {
            cout << "AcademicRecord destructor called" << endl;
      }
};

// 3. Multiple Inheritance
class Attendance
{
protected:
      float attendance;

public:
      Attendance(float a)
      {
            attendance = a;
            cout << "Attendance constructor called" << endl;
      }

      void displayAttendance()
      {
            cout << "Attendance: " << attendance << "%" << endl;
      }

      ~Attendance()
      {
            cout << "Attendance destructor called" << endl;
      }
};

class StudentReport : public AcademicRecord, public Attendance
{
public:
      StudentReport(string n, int i, string b, float m, float a)
          : AcademicRecord(n, i, b, m), Attendance(a)
      {
            cout << "StudentReport constructor called" << endl;
      }

      void displayReport()
      {
            displayAcademic();
            displayAttendance();
            cout << "Student report generated." << endl;
      }
};

// 4. Hierarchical Inheritance
class ResearchStudent : public Person
{
public:
      ResearchStudent(string n, int i) : Person(n, i) {}

      void displayResearch()
      {
            cout << "Research student: " << name << endl;
            cout << "Research ID: " << id << endl;
      }
};

class InternshipStudent : public Person
{
public:
      InternshipStudent(string n, int i) : Person(n, i) {}

      void displayInternship()
      {
            cout << "Internship student: " << name << endl;
            cout << "Student ID: " << id << endl;
      }
};

// 5. Hybrid Inheritance
class AcademicSkills : virtual public Person
{
public:
      AcademicSkills(string n, int i) : Person(n, i) {}

      void displayAcademicSkills()
      {
            cout << "Academic skills: Programming and Mathematics" << endl;
      }
};

class TechnicalSkills : virtual public Person
{
public:
      TechnicalSkills(string n, int i) : Person(n, i) {}

      void displayTechnicalSkills()
      {
            cout << "Technical skills: AI and Machine Learning" << endl;
      }
};

class AIMLStudent : public AcademicSkills, public TechnicalSkills
{
public:
      AIMLStudent(string n, int i)
          : Person(n, i),
            AcademicSkills(n, i),
            TechnicalSkills(n, i)
      {
            cout << "AIMLStudent constructor called" << endl;
      }

      void displayAIMLStudent()
      {
            displayPerson();
            displayAcademicSkills();
            displayTechnicalSkills();
      }
};

int main()
{
      cout << "\n===== 1. SINGLE INHERITANCE =====" << endl;
      Student s1("Rahul", 101, "CSE AIML");
      s1.displayStudent();

      cout << "\n===== 2. MULTILEVEL INHERITANCE =====" << endl;
      AcademicRecord s2("Priya", 102, "CSE AIML", 85);
      s2.displayAcademic();

      cout << "\n===== 3. MULTIPLE INHERITANCE =====" << endl;
      StudentReport s3("Amit", 103, "CSE AIML", 90, 95);
      s3.displayReport();

      cout << "\n===== 4. HIERARCHICAL INHERITANCE =====" << endl;
      ResearchStudent s4("Neha", 104);
      s4.displayResearch();

      InternshipStudent s5("Rohan", 105);
      s5.displayInternship();

      cout << "\n===== 5. HYBRID INHERITANCE =====" << endl;
      AIMLStudent s6("Ananya", 106);
      s6.displayAIMLStudent();

      cout << "\n===== END OF PROGRAM =====" << endl;

      return 0;
}
