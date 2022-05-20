#pragma once
#include "item.h"

#define SIZE 2

class Item;

class Report{
  private:
    int reportId;
    Item *item[SIZE];

  public:
    Report(int id);
    void displayReport();
    ~Report();
};