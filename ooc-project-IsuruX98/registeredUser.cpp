#include <string>
#include <iostream>
#include "registeredUser.h"

using namespace std;


RegisteredUser::RegisteredUser(){
  
}

void RegisteredUser::login(string email, string pw){
  u_emailAddress = email;
  u_password = pw;
}

void RegisteredUser::addItems(){
  
}
void RegisteredUser::cancelOrders(){
  
}   
void RegisteredUser::editUserAccount(){
  
}
void RegisteredUser::addPrescription(){
  
}

RegisteredUser::~RegisteredUser(){
  cout << "Registered User Deleted";
}