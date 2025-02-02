#include <iostream>
using namespace std;

int main() {
    double balance = 0.0, amount;
    int choice;

    cout << "Welcome to the Simple Banking System!" << endl;

    // selecting options 
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;

    while (true) {
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1) {
            // Check Balance
            cout << "Your current balance is: $" << balance << endl;
        } else if (choice == 2) {
            // Deposit Money
            cout << "Enter amount to deposit: $";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "Deposit successful! Your new balance is: $" << balance << endl;
            } else {
                cout << "Invalid deposit amount!" << endl;
            }
        } else if (choice == 3) {
            // Withdraw Money
            cout << "Enter amount to withdraw: $";
            cin >> amount;
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful! Your new balance is: $" << balance << endl;
            } else if (amount > balance) {
                cout << "Insufficient balance!" << endl;
            } else {
                cout << "Invalid withdrawal amount!" << endl;
            }
        } else if (choice == 4) {
            // Exit the program
            cout << "Thank you for using the Simple Banking System. Goodbye!" << endl;
            break;
        } else {
            // Invalid choice
            cout << "Invalid choice! Please select a valid option." << endl;
        }
    }

    return 0;
}
