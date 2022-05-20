#include "card.h"
#include "cart.h"
#include "delivery.h"
#include "item.h"
#include "order.h"
#include "payment.h"
#include "registeredUser.h"
#include "report.h"
#include <iostream>
#include <string>
#define SIZE 2

using namespace std;

int main() {
  Order *order = new Order();
  Cart *c1 = new Cart();
  Item *item = new Item();

  Order *o1 = new Order(001, "05/25", "Kandy");
  Order *o2 = new Order(002, "06/02", "Galle");

  c1->addOrder(o1, o2);

  Item *i1 = new Item(100, "Panadol", "Indian", 200.00);
  Item *i2 = new Item(101, "Strepsills", "Indian", 35.00);
  Item *i3 = new Item(103, "Niwaran", "Indian", 25.00);
  Item *i4 = new Item(104, "Belcid", "Finland", 450.00);
 
  order->addItem(i1, i2);

  c1->addOrder(o1, o2);



  delete c1; // delete cart

  o1->addItem(i1, i2);
  o2->addItem(i3, i4);

  o1->displayOrder();
  o2->displayOrder();

  delete order;

  cout << "\n";

  i1->displayItems();
  i2->displayItems();
  i3->displayItems();
  i4->displayItems();

  // delete items
  delete i1;
  delete i2;

  // delete orders
  delete o1;
  delete o2;

  return 0;
} 