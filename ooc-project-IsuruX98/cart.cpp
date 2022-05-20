#include <iostream>
#include <string>
#include "cart.h"
#include "order.h"


#define SIZE 2

using namespace std;

Cart::Cart(){
  Order *order[2];
}

void Cart::addOrder(Order *order1, Order *order2){
  order[0] = order1;
  order[1] = order2;
}

void Cart::displayCart(){
  for (int i = 0; i < SIZE; i++){
    order[i]  -> displayOrder();
  }
}

Cart::~Cart(){
  cout << "Cart is Deleted" << endl << endl;
}
