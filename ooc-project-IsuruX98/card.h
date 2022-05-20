#pragma once
#include "payment.h"

class Card: public Payment{
  private:
    int cardNo;
    int expDate;
    int cvv;
}; 
