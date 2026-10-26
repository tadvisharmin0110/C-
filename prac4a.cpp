
#include <iostream>
using namespace std;

int main()
{
      int marks = 75;

      int &reference = marks;
      int *pointer = &marks;

      cout << "Student Marks Analysis" << endl;
      cout << "Original Marks: " << marks << endl;
      cout << "Marks using Reference: " << reference << endl;
      cout << "Marks using Pointer: " << *pointer << endl;

      reference = 85;
      cout << "Updated Marks using Reference: " << marks << endl;

      *pointer = 92;
      cout << "Updated Marks using Pointer: " << marks << endl;

      cout << "Memory Address of Marks: " << pointer << endl;

      return 0;
}
