
#include <iostream>
using namespace std;

// Base class
class Base
{
public:
      virtual ~Base() = default;
};

// Derived class
class Derived : public Base
{
public:
      void display()
      {
            cout << "dynamic_cast successful: Derived object found."
                 << endl;
      }
};

int main()
{
      // 1. static_cast
      double value = 25.75;
      int number = static_cast<int>(value);

      cout << "Static cast (double to int): "
           << number << endl;

      // 2. dynamic_cast
      Derived obj;
      Base *basePtr = &obj;

      Derived *derivedPtr = dynamic_cast<Derived *>(basePtr);

      if (derivedPtr != nullptr)
      {
            derivedPtr->display();
      }
      else
      {
            cout << "dynamic_cast failed." << endl;
      }

      // 3. const_cast
      int original = 50;
      const int *constPtr = &original;

      int *modifiablePtr = const_cast<int *>(constPtr);
      *modifiablePtr = 60;

      cout << "const_cast result: "
           << original << endl;

      // 4. reinterpret_cast
      int data = 100;
      int *intPtr = &data;

      char *charPtr = reinterpret_cast<char *>(intPtr);

      cout << "reinterpret_cast performed successfully."
           << endl;
      cout << "Original integer value: " << *intPtr << endl;

      return 0;
}
