
#include <iostream>
#include <vector>
using namespace std;

int main()
{
      vector<int> numbers;
      int n, value;

      cout << "Enter number of elements: ";
      cin >> n;

      if (n < 1)
      {
            cout << "Please enter at least one element." << endl;
            return 0;
      }

      cout << "Enter elements: ";
      for (int i = 0; i < n; i++)
      {
            cin >> value;
            numbers.push_back(value);
      }

      cout << "Original vector: ";
      for (int x : numbers)
            cout << x << " ";

      cout << "\nEnter value to insert at beginning: ";
      cin >> value;
      numbers.insert(numbers.begin(), value);

      numbers.pop_back();

      cout << "Updated vector: ";
      for (int x : numbers)
            cout << x << " ";

      cout << "\nFirst element: " << numbers.at(0);
      cout << "\nVector size: " << numbers.size() << endl;

      return 0;
}
