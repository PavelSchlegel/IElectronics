#ifndef MP3_PLAYER
#define MP3_PLAYER

#include "device.h"

class PM3_Player : virtual public Device
{

private:

int m_totalTracks;
int m_menory;

public:

PM3_Player();
PM3_Player(int totalTracks, int memory, float price, float battaryLive, const std::string &company_name);
~PM3_Player();
void getInfo() override;
const std::string getFirmenName() override;
std::string i_am() override;
void showPrice() override;
void setTotalTracks(int totalTracks);
void setMemory(int memory);
int getTotalTracks() const;
int getMemory() const;

};

#endif