
#include <iostream>
#include <iomanip>
using namespace std;

// Base class
class Payment
{
protected:
      double amount;

public:
      // Constructor
      Payment(double a)
      {
            amount = a;
      }

      // Virtual function for runtime polymorphism
      virtual void processPayment()
      {
            cout << "Processing payment..." << endl;
      }

      // Virtual destructor
      virtual ~Payment()
      {
            // Base class cleanup
      }
};

// Derived class 1
class UpiPayment : public Payment
{
public:
      UpiPayment(double a) : Payment(a) {}

      void processPayment() override
      {
            cout << "Payment Method: UPI" << endl;
            cout << "Amount Paid: Rs. "
                 << fixed << setprecision(2) << amount << endl;
            cout << "UPI payment successful." << endl;
      }
};

// Derived class 2
class CardPayment : public Payment
{
public:
      CardPayment(double a) : Payment(a) {}

      void processPayment() override
      {
            cout << "Payment Method: Debit/Credit Card" << endl;
            cout << "Amount Paid: Rs. "
                 << fixed << setprecision(2) << amount << endl;
            cout << "Card payment successful." << endl;
      }
};

// Derived class 3
class CashPayment : public Payment
{
public:
      CashPayment(double a) : Payment(a) {}

      void processPayment() override
      {
            cout << "Payment Method: Cash" << endl;
            cout << "Amount Paid: Rs. "
                 << fixed << setprecision(2) << amount << endl;
            cout << "Cash payment successful." << endl;
      }
};

int main()
{
      int choice;
      double amount;

      cout << "===== PAYMENT PROCESSING SYSTEM =====" << endl;
      cout << "1. UPI Payment" << endl;
      cout << "2. Card Payment" << endl;
      cout << "3. Cash Payment" << endl;

      cout << "Enter payment method (1-3): ";
      if (!(cin >> choice))
      {
            cout << "Invalid input." << endl;
            return 1;
      }

      if (choice < 1 || choice > 3)
      {
            cout << "Invalid payment method." << endl;
            return 1;
      }

      cout << "Enter payment amount (Rs.): ";
      if (!(cin >> amount) || amount <= 0)
      {
            cout << "Invalid payment amount." << endl;
            return 1;
      }

      Payment *payment = nullptr;

      // Create the appropriate derived object
      switch (choice)
      {
      case 1:
            payment = new UpiPayment(amount);
            break;

      case 2:
            payment = new CardPayment(amount);
            break;

      case 3:
            payment = new CashPayment(amount);
            break;
      }

      // Runtime polymorphism
      payment->processPayment();

      delete payment;

      return 0;
}
