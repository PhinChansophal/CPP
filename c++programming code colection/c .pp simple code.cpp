//simple cprogramming ate bak tuok aray
#include <iostream>

using namespace std;

int main() {
  int menu_choice, amount, balance = 1000, pin = 1234, entered_pin;
  bool is_authenticated = false;

  // while loop to display menu options and execute user-selected action
  while (true) {
    cout << "\nWelcome to the banking system.\n"
         << "Please select an option:\n"
         << "1. Check Balance\n"
         << "2. Deposit\n"
         << "3. Withdraw\n"
         << "4. Exit\n";

    cin >> menu_choice;

    switch (menu_choice) {
      case 1:
        cout << "Your balance is: " << balance << " dollars.\n";
        break;

      case 2:
        if (!is_authenticated) {
          cout << "Please enter your PIN: ";
          cin >> entered_pin;

          if (entered_pin == pin) {
            is_authenticated = true;
          } else {
            cout << "Incorrect PIN. Try again.\n";
          }
        }

        if (is_authenticated) {
          cout << "Enter amount to deposit: ";
          cin >> amount;
          balance += amount;
          cout << amount << " dollars deposited. Your new balance is: " << balance << " dollars.\n";
        }
        break;

      case 3:
        if (!is_authenticated) {
          cout << "Please enter your PIN: ";
          cin >> entered_pin;

          if (entered_pin == pin) {
            is_authenticated = true;
          } else {
            cout << "Incorrect PIN. Try again.\n";
          }
        }

        if (is_authenticated) {
          cout << "Enter amount to withdraw: ";
          cin >> amount;

          if (amount > balance) {
            cout << "Insufficient funds. Your balance is: " << balance << " dollars.\n";
          } else {
            balance -= amount;
            cout << amount << " dollars withdrawn. Your new balance is: " << balance << " dollars.\n";
          }
        }
        break;

      case 4:
        cout << "Thank you for using the banking system. Goodbye!\n";
        return 0;

      default:
        cout << "Invalid option chosen. Please try again.\n";
        break;
    }
  }
  return 0;
}

