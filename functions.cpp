#include <iostream>

short getSlot()
{
    std::cout << "Choose a slot or 1 to 5" << std::endl;

    while (true)
    {
        short slot;
        std::cin >> slot;
        std::cin.ignore(32767,'\n');
        
        if (std::cin.fail()) //неконвертируемое значение в short
        {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "Please try again." << std::endl;
            continue;
        }

        if(slot > 0 && slot < 6) //диапазон
        {
            return slot;
        }
        else
        {
            std::cout << "Please try again" << std::endl;
        }
    }
}


char getOperator()
{
    while (true)
    {
        std::cout << "Choose 'i' for product information " << std::endl;
        std::cout << "       'n' to select next product" << std::endl;
        std::cout << "       'q' to exit" << std::endl;
        char oper;
        std::cin >> oper;
        std::cin.ignore(32767,'\n');

        switch(oper)
        {
            case 'n':
            case 'i':
            case 'q':
                return oper;
            default:
                std::cout << "Please try again" << std::endl;
        }
    }
}