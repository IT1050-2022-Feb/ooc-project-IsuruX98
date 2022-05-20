#pragma once
#include <string>
#include "order.h"
class Order;

#define SIZE 2
 
using namespace std;

class RegisteredUser{
  private:
    string u_emailAddress;
    string u_password;
    Order *order[SIZE]; 

  public:
    RegisteredUser();
    void login(string email, string pw);
    void addItems();
    void cancelOrders();
    void editUserAccount();
    void addPrescription();
    ~RegisteredUser();
};