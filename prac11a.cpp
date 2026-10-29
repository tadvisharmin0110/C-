
#include <iostream>
#include <list>
using namespace std;

int main()
{
      list<int> numbers;
      int n, value, removeValue;

      cout << "Enter number of elements: ";
      cin >> n;

      cout << "Enter elements: ";
      for (int i = 0; i < n; i++)
      {
            cin >> value;
            numbers.push_back(value);
      }

      cout << "Original list: ";
      for (int x : numbers)
            cout << x << " ";

      cout << "\nEnter value to add at front: ";
      cin >> value;
      numbers.push_front(value);

      cout << "Enter value to add at back: ";
      cin >> value;
      numbers.push_back(value);

      cout << "Enter value to remove: ";
      cin >> removeValue;
      numbers.remove(removeValue);

      cout << "Updated list: ";
      for (int x : numbers)
            cout << x << " ";

      cout << "\nList size: " << numbers.size() << endl;

      return 0;
}
