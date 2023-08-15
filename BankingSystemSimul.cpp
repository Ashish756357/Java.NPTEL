#include <iostream>
#include <cstring>

using namespace std;

// Define structures for customer, account, and transaction
struct Customer {
    int id;
    char name[50];
};

struct Account {
    int accountNumber;
    double balance;
    Customer* customer;
};

struct Transaction {
    int transactionId;
    int accountNumber;
    double amount;
};

int main() {
    const int maxCustomers = 10;
    const int maxAccounts = 20;
    const int maxTransactions = 50;

    // Allocate memory for arrays of customers, accounts, and transactions
    Customer* customers = new Customer[maxCustomers];
    Account* accounts = new Account[maxAccounts];
    Transaction* transactions = new Transaction[maxTransactions];

    int customerCount = 0;
    int accountCount = 0;
    int transactionCount = 0;

    // Simulate adding a new customer
    customers[customerCount].id = 1;
    strcpy(customers[customerCount].name, "John Doe");
    customerCount++;

    // Simulate creating an account for the customer
    accounts[accountCount].accountNumber = 1001;
    accounts[accountCount].balance = 1000.0;
    accounts[accountCount].customer = &customers[0]; // Link the account to the customer
    accountCount++;

    // Simulate a transaction
    transactions[transactionCount].transactionId = 50001;
    transactions[transactionCount].accountNumber = 1001;
    transactions[transactionCount].amount = -200.0; // Negative amount indicates withdrawal
    transactionCount++;

    // Display customer information, account details, and transactions
    cout << "Customer Name: " << customers[0].name << endl;
    cout << "Account Number: " << accounts[0].accountNumber << endl;
    cout << "Account Balance: " << accounts[0].balance << endl;
    cout << "Transaction ID: " << transactions[0].transactionId << endl;
    cout << "Transaction Amount: " << transactions[0].amount << endl;

    // Deallocate dynamically allocated memory
    delete[] customers;
    delete[] accounts;
    delete[] transactions;

    return 0;
}
