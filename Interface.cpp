#include "Interface.h"
#include "InterfaceImpl.h"

#include <iostream>

Interface::Interface()
{
    std::cout << "Interface inited" << std::endl;
}

Interface::~Interface()
{
    std::cout << "Interface destroyed" << std::endl;
}

std::shared_ptr<Interface> Interface::GetInterface()
{
    return std::make_shared<InterfaceImpl>();
}
