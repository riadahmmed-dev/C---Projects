#include <iostream>
using namespace std;

int main() {

    int pin;
    int balance = 150000;
    int choice;
    int amount;
    
    cout << "===== ATM SIMULATOR =====" << endl;
    cout << "Enter PIN: ";
    cin >> pin;

    if (pin != 1234) {
        cout << "Incorrect PIN!" << endl;
        return 0;
    }

    cout << "Login successful!" << endl;

    while (true) {

        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {

            cout << "Current Balance: " << balance << " BDT" << endl;

        }
        else if (choice == 2) {

            cout << "Enter deposit amount: ";
            cin >> amount;

            if (amount > 0) {
                balance = balance + amount;
                cout << "Deposit successful!" << endl;
                cout << "New Balance: " << balance << " BDT" << endl;
            }
            else {
                cout << "Invalid amount!" << endl;
            }

        }
        else if (choice == 3) {

            cout << "Enter withdrawal amount: ";
            cin >> amount;

            if (amount <= 0) {
                cout << "Invalid amount!" << endl;
            }
            else if (amount > balance) {
                cout << "Insufficient balance!" << endl;
            }
            else {
                balance = balance - amount;
                cout << "Withdrawal successful!" << endl;
                cout << "Remaining Balance: " << balance << " BDT" << endl;
            }

        }
        else if (choice == 4) {

            cout << "Thank you for using our ATM!" << endl;
            break;

        }
        else {

            cout << "Invalid choice!" << endl;

        }
    }

    return 0;
}
