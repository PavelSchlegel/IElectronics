#ifndef NAVIGATOR
#define NAVIGATOR

#include "device.h"

class Navigator : virtual public Device
{
private:

    int m_mapsSaveMemory;

public:

    Navigator();
    Navigator(int mapsSaveMemory);
    Navigator(int mapsSaveMemory, float price, float battaryLive, const std::string &company_name);
    ~Navigator();
    void getInfo() override;
    const std::string getFirmenName() override;
    std::string i_am() override;
    void showPrice() override;
    void setMapsSaveMemory(int memory);
    int getMapsSaveMemory() const;

};

#endif