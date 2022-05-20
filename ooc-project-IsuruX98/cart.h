#pragma once
#include "order.h"

#define SIZE 2

class Cart{
  private:  
    Order *order[SIZE];
   // int cartId;
 
  public:
    Cart();
    void addOrder(Order *order1, Order *order2);
    void displayCart();
    ~Cart();
  
};