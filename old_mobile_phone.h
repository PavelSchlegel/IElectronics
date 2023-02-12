#ifndef OLD_MOBILE_PHONE
#define OLD_MOBILE_PHONE

#include "device.h"

class Old_Phone : virtual public Device
{
private:

int m_maxPhoneNumber;
int m_flashMemory;

public:

Old_Phone();
Old_Phone(int maxPhoneNumber, int flashMemory);
Old_Phone(int maxPhoneNumber, int flashMemory, float price, float battaryLive, const std::string &company_name);
~Old_Phone();
void getInfo() override;
const std::string getFirmenName() override;
std::string i_am() override;
void showPrice() override;
void setMaxPhoneNumber(int maxPhoneNumber);
void setFlashMemory(int flashMemory);
int getMaxPhoneNumber() const;
int getFlashMemory() const;

};

#endif