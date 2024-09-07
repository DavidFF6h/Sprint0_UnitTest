#include "pch.h"
#include "BankAccount.h"

BankAccount::BankAccount() : balance(0) {}

BankAccount::BankAccount(int balance) : balance(balance) {}

void BankAccount::deposit(int amount) {
    balance += amount;
}

void BankAccount::withdraw(int amount) {
    if (amount <= balance) {
        balance -= amount;
    }
}

int BankAccount::getBalance() const {
    return balance;
}

