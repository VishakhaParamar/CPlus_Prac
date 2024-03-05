//Banking system
#include <iostream>
#include <iomanip>
class bankaccount {
    private:
    double balance;
    
    public:
    bankaccount(double initialbalance = 0.0) : balance(initialbalance) {}
    //Fun. to deposit money into account
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited $" << amount << " into your account." << std::endl;
    }
    //Function to withdraw money from the account
    bool withdraw(double amount) {
        if(balance >= amount) {
            balance -= amount;
            std::cout << "Withdraw $" << amount << " from your account." << std::endl;
            return true;
        } else {
            std::cout << "Insufficient funds to withdraw $" << amount << " from your account." << std::endl;
            return false;
        }
    }
    //Function to display balance
    void displaybalance() const {
        std::cout << "Current Balance: $" << balance << std::endl;
    }
};
int main() {
    bankaccount account;
    int choice;
    double amount;
    std::cout << "Welcome to the simple banking system!" << std::endl;
    do {
        std::cout << "\nMenu:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter your choice: ";
        std::cin >> choice;
        switch(choice) {
            case 1:
                std::cout << "Enter amount to deposit: $";
                std::cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                std::cout << "Enter amount to withdraw: $";
                std::cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.displaybalance();
                break;
            case 4:
                std::cout << "Thank You for using the simple bank system" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again" << std::endl;
        }
    } while (choice != 4);
    return 0;
}
