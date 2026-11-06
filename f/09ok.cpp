
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class InvalidAmountException : public runtime_error {
public:
    InvalidAmountException(const string& message) : runtime_error(message) {}

    const char* what() const noexcept override {
        return runtime_error::what();
    }
};

class InsufficientFundsException : public runtime_error {
public:
    InsufficientFundsException(const string& message) : runtime_error(message) {}

    const char* what() const noexcept override {
        return runtime_error::what();
    }
};

class LimitExceededException : public runtime_error {
public:
    LimitExceededException(const string& message) : runtime_error(message) {}

    const char* what() const noexcept override {
        return runtime_error::what();
    }
};

class ATM {
private:
    int balance;
    int dailyLimit;
    int withdrawnToday;

public:
    ATM(int b, int limit) {
        balance = b;
        dailyLimit = limit;
        withdrawnToday = 0;
    }

    void withdraw(int amount) {
        if (amount % 100 != 0) {
            throw InvalidAmountException("Сuma повинна бути кратна 100");
        }

        if (amount > balance) {
            throw InsufficientFundsException("Недостатньо коштів на балансі");
        }

        if (withdrawnToday + amount > dailyLimit) {
            throw LimitExceededException("Перевищено добовий ліміт");
        }

        balance -= amount;
        withdrawnToday += amount;

        cout << "Гроші успішно знято хохохо!" << endl;
        cout << "Залишок: " << balance << endl;
    }
};

int main() {
    ATM atm(10000, 5000);

    int amount;

    cout << "введіть сумму для зняття -   ";
    cin >> amount;

    try {
        atm.withdraw(amount);
    }
    catch (InvalidAmountException& e) {
        cout << e.what() << endl;
    }
    catch (InsufficientFundsException& e) {
        cout << e.what() << endl;
    }
    catch (LimitExceededException& e) {
        cout << e.what() << endl;
    }

    return 0;
}
