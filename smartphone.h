#ifndef SMARTPHONE
#define SMARTPHONE

#include "old_mobile_phone.h"
#include "navigator.h"

class Smartphone : public Old_Phone, public Navigator
{
private:

bool m_fotoCamera;

public:

Smartphone();
Smartphone(bool fotoCamera, int maxPhoneNumber,
int flashMemory, float price, float battaryLive, const std::string &company_name,int mapsSaveMemory);
~Smartphone();
void getInfo() override;
const std::string getFirmenName() override;
std::string i_am() override;
void showPrice() override;
void setFotoCamera(bool camera);
bool getFotoCamera() const;

};

#endif