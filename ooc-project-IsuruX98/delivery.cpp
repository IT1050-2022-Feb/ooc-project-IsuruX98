#include "delivery.h"

Delivery::Delivery(int id, string status){
  dispatchId = id;
  handoverStatus = status;
}

void Delivery::setDispatchId(int id){
  dispatchId = id;
}
void Delivery::setHandoverStatus(string status){
  handoverStatus = status;
}

int Delivery::getDispatchId(){
  return dispatchId;
}
string Delivery::getHandoverStatus(){
  return handoverStatus;
}

void Delivery::dispatchStatus(){}