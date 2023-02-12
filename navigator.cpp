#include "navigator.h"

Navigator::Navigator() :
m_mapsSaveMemory(0),
Device()
{

}

Navigator::Navigator(int mapsSaveMemory)
{
    m_mapsSaveMemory = mapsSaveMemory;
}

Navigator::Navigator(int mapsSaveMemory, float price, float battaryLive, const std::string &company_name) :
m_mapsSaveMemory(mapsSaveMemory),
Device(price, battaryLive, company_name)
{

}

Navigator::~Navigator()
{

}

void Navigator::getInfo()
{
    Device::getInfo();
    std::cout << "Memory vor maps :" << m_mapsSaveMemory << std::endl;
}

const std::string Navigator::getFirmenName()
{
    return m_company_name;
}

std::string Navigator::i_am()
{
    return "Navigator";
}

void Navigator::showPrice()
{
    std::cout << "Price is" << m_price << std::endl;
}

void Navigator::setMapsSaveMemory(int memory)
{
    m_mapsSaveMemory = memory;
}

int Navigator::getMapsSaveMemory() const
{
    return m_mapsSaveMemory;
}
