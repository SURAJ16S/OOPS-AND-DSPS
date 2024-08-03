#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    double balance;

public:
    BankAccount() : depositorName(""), accountNumber(0), balance(0.0) {}

    void initialize(string name, int accNo, double initialBalance) {
        depositorName = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    void display() const {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    bool verifyAccount(int accNo) const {
        return accNo == accountNumber;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account;
    int choice;
    double amount;
    string name;
    int accNo;
    double initialBalance;

    do {
        cout << "\tBank Of India\n";
        cout << "1. Initialize Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display Account Information\n";
        cout << "5. Check Balance\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter depositor's name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter account number: ";
                cin >> accNo;
                cout << "Enter initial balance: ";
                cin >> initialBalance;
                if (!cin.fail()) {
                    account.initialize(name, accNo, initialBalance);
                    cout << "Account initialized.\n";
                } else {
                    cout << "Invalid input for account number or balance.\n";
                }
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (!cin.fail()) {
                    account.deposit(amount);
                } else {
                    cout << "Invalid deposit amount.\n";
                }
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (!cin.fail()) {
                    account.withdraw(amount);
                } else {
                    cout << "Invalid withdrawal amount.\n";
                }
                break;
            case 4:
                account.display();
                break;
            case 5:
                cout << "Enter account number to check balance: ";
                cin >> accNo;
                if (!cin.fail()) {
                    if (account.verifyAccount(accNo)) {
                        cout << "Current balance: " << account.getBalance() << endl;
                    } else {
                        cout << "Incorrect account number.\n";
                    }
                } else {
                    cout << "Invalid account number.\n";
                }
                break;
            case 6:
                cout << "Exiting.\n";
                break;
            default:
                cout << "Invalid choice. Please select a valid option.\n";
        }
    } while (choice != 6);

    return 0;
}
