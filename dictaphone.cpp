#include "dictaphone.h"

Dictaphone::Dictaphone() :

m_recTotalMemory(0),
Device()
{

}

Dictaphone::Dictaphone(int recTotalMemory, float price, float battaryLive, const std::string &company_name) :

m_recTotalMemory(recTotalMemory),
Device(price, battaryLive, company_name)
{

}

Dictaphone::~Dictaphone()
{

}

void Dictaphone::getInfo()
{
    Device::getInfo();
    std::cout << "REC total Memory :" << m_recTotalMemory << std::endl;
}

std::string Dictaphone::i_am()
{
    return "Dictaphone";
}

void Dictaphone::showPrice()
{
    std::cout << "Price is" << m_price << std::endl;
}

void Dictaphone::setRecTotalMemory(int recTotalMemory)
{
    m_recTotalMemory = recTotalMemory;
}

int Dictaphone::getRecTotalMemory() const
{
    return m_recTotalMemory;
}