#ifndef DIVECE
#define DIVECE

#include "device.h"

class Dictaphone :  virtual public Device
{

private:

    int m_recTotalMemory;

public:

    Dictaphone();
    Dictaphone(int recTotalMemory, float price, float battaryLive, const std::string &company_name);
    ~Dictaphone();
    void getInfo() override;
    std::string i_am() override;
    void showPrice() override;
    void setRecTotalMemory(int recTotalMemory);
    int getRecTotalMemory() const;

};

#endif