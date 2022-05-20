#include <iostream>
#include <string>

#include "order.h"
#include "item.h"
#include "delivery.h"

class Delivery;

using namespace std;

Order::Order(){}

Order::Order(int id, string status){
  Item *item[2];
  delivery = new Delivery(1, "abc"); 

    
}


Order::Order(int id, string date, string address){
  orderId = id;
  deliveryDate = date;
  deliveryAddress = address;
}


void Order::setOrderId(int id){
  
}
void Order::setDeliveryDate(string date){
  
}
void Order::setDeliveryAddress(string address){
  
}

int Order::getOrderId(){
  return orderId;
}
string Order::getDeliveryDate(){
  return deliveryDate;
}
string Order::getDeliveryAddress(){
  return deliveryAddress;
}

void Order::addItem(Item *item1, Item *item2){
  item[0] = item1;
  item[1] = item2;
}

void Order::displayOrder(){
  cout << "Order Id: " << orderId << endl;
  cout << "Delivery Date : " << deliveryDate << endl;
  cout << "Delivery Address : " << deliveryAddress << endl;
  cout << "_________________________________________________" << endl;
  
 
 for(int i = 0; i < SIZE; i++){
    item[i]  -> displayItems();     
  }

}

Order::~Order(){
  cout << "Orders are Deleted." << endl;
}
