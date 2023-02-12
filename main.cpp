#include "_include.h"

int main()
{
    IElektronics **device = new IElektronics*[5];
    device[0] = new Dictaphone(50, 10.99, 100, "Samsung");
    device[1] = new PM3_Player(100, 50, 20.99, 120, "Sony");
    device[2] = new Navigator(150, 36.99, 150, "Garmin");
    device[3] = new Old_Phone(300, 250, 78.49, 120, "Nokia");
    device[4] = new Smartphone(true, 500, 1024, 149.99, 200, "Samsung", 120);

    std::cout << "Welcome to the electronics showcase!" << std::endl;

    while(true)
    {
        short slot = (getSlot() - 1);  //выравниваем под массив

        std::cout << device[slot]->i_am() << " : " << device[slot]->getFirmenName() << std::endl;

        char infVSexit = getOperator();
        if(infVSexit == 'q')
        {
            break;
        }
        
        if(infVSexit == 'i')
        {
            device[slot]->getInfo();
        }
        
        if(infVSexit == 'n')
        {
            continue;
        }
    }

    std::cout << "See you again!" << std::endl;

    for(std::size_t i = 0; i < 5; ++i)
    {
        delete device[i];
    }

    delete [] device;

    return 0;
}