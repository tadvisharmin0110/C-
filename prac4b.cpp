#include <iostream>
using namespace std;

int main()
{
      int n;

      cout << "Enter the number of elements: ";
      cin >> n;

      if (n <= 0)
      {
            cout << "Invalid number of elements." << endl;
            return 0;
      }

      // Dynamic memory allocation
      int *arr = new int[n];
      int total = 0;

      cout << "Enter " << n << " elements:" << endl;

      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
            total += arr[i];
      }

      cout << "\nArray elements: ";

      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " ";
      }

      cout << "\nTotal: " << total << endl;
      cout << "Average: " << static_cast<double>(total) / n << endl;

      // Dynamic memory deallocation
      delete[] arr;
      arr = nullptr;

      cout << "Memory deallocated successfully." << endl;

      return 0;
}