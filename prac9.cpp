
#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main()
{
      string projectTitle;
      string copiedTitle;
      string movedTitle;

      cout << "===== PROJECT DATA MANAGEMENT =====" << endl;

      cout << "Enter project title: ";
      getline(cin, projectTitle);

      // Copy the original string
      copiedTitle = projectTitle;

      // Move the original string into another object
      movedTitle = std::move(projectTitle);

      cout << "\n===== RESULTS =====" << endl;

      cout << "Copied project title: "
           << copiedTitle << endl;

      cout << "Moved project title: "
           << movedTitle << endl;

      cout << "\nThe project title was transferred "
           << "using std::move()." << endl;

      cout << "The original string remains valid, "
           << "but its value is unspecified." << endl;

      return 0;
}
