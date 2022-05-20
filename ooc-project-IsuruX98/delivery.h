#pragma once
#include <string>

using namespace std;

class Delivery{
  private:
    int dispatchId;
    string handoverStatus;

  public:
    Delivery(int id, string status);
    void setDispatchId(int id);
    void setHandoverStatus(string status);
    int getDispatchId();
    string getHandoverStatus();
    void dispatchStatus();
    ~Delivery();
};