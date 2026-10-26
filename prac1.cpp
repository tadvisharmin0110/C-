#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
      string name;
      int accountNo;
      float balance;

public:
      // Constructor
      BankAccount()
      {
            name = "Sharmin";
            accountNo = 654981;
            balance = 5000;
            cout << "Account Created Successfully!" << endl;
      }

      // User-defined function to deposit money
      void deposit(float amount)
      {
            balance = balance + amount;
            cout << "Amount Deposited: Rs. " << amount << endl;
      }

      // User-defined function to display account details
      void display()
      {
            cout << "\nAccount Details:" << endl;
            cout << "Name       : " << name << endl;
            cout << "Account No.: " << accountNo << endl;
            cout << "Balance    : Rs. " << balance << endl;
      }

      // Destructor
      ~BankAccount()
      {
            cout << "\nAccount object destroyed." << endl;
      }
};

int main()
{
      BankAccount account;

      account.deposit(2000);
      account.display();

      return 0;
}