#ifndef IELEKTRONICS
#define IELEKTRONICS

#include <iostream>
#include <string>

class IElektronics //зачем?
{
public:

    virtual void getInfo() = 0;
    virtual const std::string getFirmenName() = 0;
    virtual std::string i_am() = 0;
    virtual void showPrice() = 0;
    virtual~IElektronics() = default;
};

#endif