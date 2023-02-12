#include "old_mobile_phone.h"

Old_Phone::Old_Phone() :

m_maxPhoneNumber(0),
m_flashMemory(0),
Device()
{

}

Old_Phone::Old_Phone(int maxPhoneNumber, int flashMemory)
{
    m_maxPhoneNumber = maxPhoneNumber;
    m_flashMemory = flashMemory;
}

Old_Phone::Old_Phone(int maxPhoneNumber, int flashMemory, float price, float battaryLive, const std::string &company_name) :

m_flashMemory(maxPhoneNumber),
m_maxPhoneNumber(flashMemory),
Device(price, battaryLive, company_name)
{

}

Old_Phone::~Old_Phone()
{

}

void Old_Phone::getInfo()
{
    Device::getInfo();
    std::cout << "Flashmemory :" << m_flashMemory << std::endl;
    std::cout << "Phonenumber max. :" << m_maxPhoneNumber << std::endl;
}

const std::string Old_Phone::getFirmenName()
{
    return m_company_name;
}

std::string Old_Phone::i_am()
{
    return "Old mobile phone";
}

void Old_Phone::showPrice()
{
    std::cout << "Price is" << m_price << std::endl;
}

void setMaxPhoneNumber(int maxPhoneNumber)
{
    maxPhoneNumber = maxPhoneNumber;
}

void Old_Phone::setFlashMemory(int flashMemory)
{
    m_flashMemory = flashMemory;
}

int Old_Phone::getMaxPhoneNumber() const
{
    return m_maxPhoneNumber;
}

int Old_Phone::getFlashMemory() const
{
    return m_flashMemory;
}