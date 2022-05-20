#include <iostream>
#include "payment.h"

using namespace std;

Payment::Payment(){
  
}



Payment::Payment(int id, string date, float total){ 
  paymentId = id;
  paymentDate = date;
  totalAmount = total;
}

void Payment::displayPaymentDetails(){
  cout << "Payment ID: " << paymentId << endl;
  cout << "Total Amount : " << totalAmount << endl; 
}

void Payment::validate(){}

Payment::~Payment(){
  cout << "Payments are Deleted";
}