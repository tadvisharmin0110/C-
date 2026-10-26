#include <iostream>
using namespace std;

int main()
{
      int a, b;

      cout << "Enter numerator: ";
      cin >> a;

      cout << "Enter denominator: ";
      cin >> b;

      try
      {
            if (b == 0)
            {
                  throw b;
            }

            cout << "Result: " << (float)a / b << endl;
      }
      catch (int)
      {
            cout << "Exception caught: Division by zero is not allowed." << endl;
      }

      cout << "Program executed successfully." << endl;

      return 0;
}