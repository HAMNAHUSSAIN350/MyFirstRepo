#include <iostream>
using namespace std;

class PaymentMethod {
public:
    virtual void authorize(double amount) = 0;
    virtual void capture(double amount) = 0;
};

class Refundable {
public:
    virtual void refund(double amount) = 0;
};

class CreditCard : public PaymentMethod {
public:
    void authorize(double amount) override {
        cout << "CreditCard authorized payment of " << amount << endl;
    }

    void capture(double amount) override {
        cout << "CreditCard captured payment of " << amount << endl;
    }
};

class PayPal : public PaymentMethod, public Refundable {
public:
    void authorize(double amount) override {
        cout << "PayPal authorized payment of " << amount << endl;
    }

    void capture(double amount) override {
        cout << "PayPal captured payment of " << amount << endl;
    }

    void refund(double amount) override {
        cout << "PayPal refunded amount of " << amount << endl;
    }
};

int main() {
    CreditCard c;
    PayPal p;

    c.authorize(100.0);
    c.capture(100.0);

    p.authorize(200.0);
    p.capture(200.0);
    p.refund(50.0);

    return 0;
}
