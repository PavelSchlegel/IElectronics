#include "smartphone.h"
#include "navigator.h"

Smartphone::Smartphone() :
m_fotoCamera(false),
Old_Phone(),
Navigator()
{

}

Smartphone::Smartphone(bool fotoCamera, int maxPhoneNumber,
int flashMemory, float price, float battaryLive, const std::string &company_name,int mapsSaveMemory)

: m_fotoCamera(fotoCamera),
Navigator(mapsSaveMemory),
Device(price, battaryLive, company_name),
Old_Phone(maxPhoneNumber, flashMemory)
{

}

Smartphone::~Smartphone()
{

}

void Smartphone::getInfo()
{
    Device::getInfo();
    Navigator::getInfo();
    std::cout << "Fotocamera ::" << m_fotoCamera << std::endl;
}

const std::string Smartphone::getFirmenName()
{
    return m_company_name;
}

std::string Smartphone::i_am()
{
    return "Smartphone";
}

void Smartphone::showPrice()
{
    std::cout << "Price is" << m_price << std::endl;
}

void Smartphone::setFotoCamera(bool camera)
{
    m_fotoCamera = camera;
}

bool Smartphone::getFotoCamera() const
{
    return m_fotoCamera;
}