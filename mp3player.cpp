#include "mp3player.h"

PM3_Player::PM3_Player() :

m_menory(0),
m_totalTracks(0),
Device()

{

}

PM3_Player::PM3_Player(int totalTracks, int memory, float price, float battaryLive, const std::string &company_name) :

m_menory(memory),
m_totalTracks(totalTracks),
Device(price, battaryLive, company_name)

{

}

PM3_Player::~PM3_Player()
{

}

void PM3_Player::getInfo()
{
    Device::getInfo();
    std::cout << "Total Tracjs :" << m_totalTracks << std::endl;
    std::cout << "Memory :" << m_menory << std::endl;
}

const std::string PM3_Player::getFirmenName()
{
    return m_company_name;
}

std::string PM3_Player::i_am()
{
    return "MP3 Player";
}

void PM3_Player::setTotalTracks(int totalTracks)
{
    m_totalTracks = totalTracks;
}

void PM3_Player::setMemory(int memory)
{
    m_menory = memory;
}

void PM3_Player::showPrice()
{
    std::cout << "Price is" << m_price << std::endl;
}

int PM3_Player::getTotalTracks() const
{
    return m_totalTracks;
}

int PM3_Player::getMemory() const
{
    return m_menory;
}