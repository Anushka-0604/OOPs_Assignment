#include <iostream>
using namespace std;

class Account {
    const long acc_no;
    long trans_id = 0;
    string type;
    double balance;

public:
    Account(long a, double b) : acc_no(a), balance(b) {}

    long depositAmount(const long to, const long from, const double amount) {
        if (to == acc_no) {
            balance += amount;
            type = "Credit";
            return ++trans_id;
        }
        return 0;
    }

    long creditAmount(const long to, const long from, const double amount) {
        if (from == acc_no) {
            balance -= amount;
            type = "Debit";
            return ++trans_id;
        }
        return 0;
    }

    void displayDetails() const {
        cout << "Acc: " << acc_no
             << " Balance: " << balance
             << " Last: " << type << endl;
    }
};

int main() {
    Account a1(1,1000), a2(2,2000);

    a1.depositAmount(1,2,500);
    a2.creditAmount(1,2,300);

    a1.displayDetails();
    a2.displayDetails();

    return 0;
}
