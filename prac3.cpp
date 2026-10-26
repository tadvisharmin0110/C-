
#include <iostream>
using namespace std;

class Bill
{
      float amount;

public:
      Bill()
      {
            amount = 0;
      }

      Bill(float a)
      {
            amount = a;
      }

      Bill operator+(const Bill &b)
      {
            Bill temp;
            temp.amount = amount + b.amount;
            return temp;
      }

      void display()
      {
            cout << "Total Bill Amount: Rs. "
                 << amount << endl;
      }
};

int main()
{
      Bill b1;

      Bill b2(450.50);
      Bill b3(299.50);

      b1 = b2 + b3;

      cout << "First Product Bill: Rs. 450.50" << endl;
      cout << "Second Product Bill: Rs. 299.50" << endl;

      b1.display();

      return 0;
}
