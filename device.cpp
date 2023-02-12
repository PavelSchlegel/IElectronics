#include "device.h"

Device::Device() : 

    m_price(0), 
    m_battaryLive(0), 
    m_company_name("No Name")
    {

    }

Device::Device(float price, float battaryLive, const std::string &company_name)

    : m_price(price), 
    m_battaryLive(battaryLive), 
    m_company_name(company_name)
    {

    }
    
Device::~Device()
{

}

void Device::getInfo()
{
    std::cout << "Price :" << m_price << std::endl;
    std::cout << "Battry Live :" << m_battaryLive << std::endl;
    //std::cout << "Company :" << m_company_name << std::endl;
}

std::string Device::i_am()
{
    return "Device :";
}
const std::string Device::getFirmenName()
{
    return m_company_name;
}

void Device::showPrice()
{
    std::cout << "Price is" << m_price << std::endl;
}

void Device::setPrice(float price)
{
    m_price = price;
}

void Device::sestBattaryLive(float battaryLive)
{
    m_battaryLive = battaryLive;
}

void Device::setDeviceName(const std::string &company_name)
{
    m_company_name = company_name;
}

float Device::getPrice() const
{
    return m_price;
}

float Device::getBattaryLive() const
{
    return m_battaryLive;
}

std::string Device::getDeviceName() const
{
    return m_company_name;
}