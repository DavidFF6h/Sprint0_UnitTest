#include "pch.h"
#include "CppUnitTest.h"
#include "BankAccount.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BankAccountTests
{
    TEST_CLASS(BankAccountTests)
    {
    public:

        // Test that the default constructor initializes balance to 0
        TEST_METHOD(DefaultConstructorInitializesToZero)
        {
            BankAccount account;
            Assert::AreEqual(0, account.getBalance());
        }

        // Test deposit functionality
        TEST_METHOD(DepositIncreasesBalance)
        {
            BankAccount account;
            account.deposit(100);
            Assert::AreEqual(100, account.getBalance());
        }

        // Test withdraw functionality
        TEST_METHOD(WithdrawDecreasesBalance)
        {
            BankAccount account(200);
            account.withdraw(50);
            Assert::AreEqual(150, account.getBalance());
        }

        // Test withdraw functionality with insufficient funds
        TEST_METHOD(WithdrawMoreThanBalance)
        {
            BankAccount account(100);
            account.withdraw(150); // Should not allow more than balance
            Assert::AreEqual(100, account.getBalance()); // Balance remains the same
        }
    };
}

