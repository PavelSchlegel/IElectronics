#ifndef DEVICE
#define DEVICE

#include "elektronics.h"

class Device : virtual public IElektronics
{
protected:

    float m_price;
    float m_battaryLive;
    std::string m_company_name;

public:

    Device();
    Device(float price, float battaryLive, const std::string &m_company_name);
    ~Device();
    void getInfo() override;
    const std::string getFirmenName() override;
    std::string i_am() override;
    void showPrice() override;
    void setPrice(float price);
    void sestBattaryLive(float battaryLive);
    void setDeviceName(const std::string &m_company_name);
    float getPrice() const;
    float getBattaryLive() const;
    std::string getDeviceName() const;
};

#endif