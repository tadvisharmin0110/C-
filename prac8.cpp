
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

// Function to calculate average safely
double safeDivide(double total, int count)
{
      if (count == 0)
      {
            throw runtime_error("Division by zero is not allowed.");
      }

      return total / count;
}

int main()
{
      int n;
      double total = 0;

      try
      {
            cout << "===== STUDENT MARKS VALIDATION SYSTEM =====" << endl;

            cout << "Enter number of subjects: ";

            if (!(cin >> n))
            {
                  throw runtime_error("Invalid input. Enter an integer.");
            }

            if (n <= 0)
            {
                  throw invalid_argument(
                      "Number of subjects must be positive.");
            }

            vector<int> marks(n);

            for (int i = 0; i < n; i++)
            {
                  cout << "Enter marks for subject "
                       << i + 1 << ": ";

                  if (!(cin >> marks[i]))
                  {
                        throw runtime_error(
                            "Invalid input. Enter numeric marks.");
                  }

                  if (marks[i] < 0 || marks[i] > 100)
                  {
                        throw out_of_range(
                            "Marks must be between 0 and 100.");
                  }

                  total += marks[i];
            }

            double average = safeDivide(total, n);

            cout << "\n===== RESULT =====" << endl;
            cout << "Total Marks: " << total << endl;
            cout << "Average Marks: " << average << endl;

            cout << "Result calculated successfully." << endl;
      }
      catch (const invalid_argument &e)
      {
            cout << "Error: " << e.what() << endl;
      }
      catch (const out_of_range &e)
      {
            cout << "Error: " << e.what() << endl;
      }
      catch (const exception &e)
      {
            cout << "Error: " << e.what() << endl;
      }

      cout << "Program execution completed." << endl;

      return 0;
}
