#pragma once
#include<iostream>
#include <string>
#include "report.h"
class Report;

using namespace std;

class Item{
  private: 
    int itemId;
    string genericName;
    string brandName;
    float itemPrice;
    Report *report;

  public:
    Item();
    Item(int id, string genName, string brand, float price);
    void displayItems();
    ~Item();


};