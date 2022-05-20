#pragma once
#include <string>
#include "order.h"
class Order;

using namespace std;

class Payment{
  protected:
    int paymentId;
    string paymentDate;
    float totalAmount;
    Order *order;

  public:
    Payment();
    Payment(int id, string date, float total);

    void displayPaymentDetails();
    void validate();
    ~Payment();
};