#pragma once
#include <string>
#include "item.h"
#include "registeredUser.h"
#include "payment.h"
#include "delivery.h"
#define SIZE 2
class RegisteredUser;
class Payment;

class Order{
  private:
    Item *item[SIZE];
    RegisteredUser *regUser;
    Payment *payment[SIZE];
    Delivery *delivery;
    int orderId;
    string deliveryDate;
    string deliveryAddress;
  
  public:
    Order();
    Order(int id, string date, string address);
    Order (int id, string status);
  
    
    void setOrderId(int id);
    void setDeliveryDate(string date);
    void setDeliveryAddress(string address);

    int getOrderId();
    string getDeliveryDate();
    string getDeliveryAddress();
    void displayOrder();
   
  
    void addItem(Item *item1, Item *item2);
    
    
    ~Order();
}; 