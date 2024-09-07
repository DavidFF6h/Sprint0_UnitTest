#pragma once

class BankAccount
{
public:
    BankAccount();
    explicit BankAccount(int balance);
    void deposit(int amount);
    void withdraw(int amount);
    int getBalance() const;

private:
    int balance;
};


