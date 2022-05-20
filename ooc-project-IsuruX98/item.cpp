#include <string.h>
//#define SIZE 2
#include "item.h"

using namespace std;

Item::Item(){
  
}


Item::Item(int id, string genName, string brand, float price){
  itemId = id;
  genericName = genName;
  brandName = brand;
  itemPrice = price;
} 

void Item::displayItems(){
  cout << "Item ID: " << itemId << endl;
  cout << "Generic Name: " << genericName << endl;
  cout << "Brand Name: " << brandName << endl;
  cout << "Item Price: " << itemPrice << endl;
  cout << "*****************" << endl;
};

Item::~Item(){
  cout << "Items are Deleted" << endl;
}