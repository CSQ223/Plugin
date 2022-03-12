#include "InterfaceImpl.h"
#include "Lib.h"

#include <iostream>

InterfaceImpl::InterfaceImpl()
{
    std::cout << "InterfaceImpl inited" << std::endl;
}

InterfaceImpl::~InterfaceImpl()
{
    std::cout << "InterfaceImpl destroyed" << std::endl;
}

void InterfaceImpl::Debug(const char *msg)
{
    std::cout << "[Debug] " << msg << std::endl;
}

corelib_define_module(Interface, InterfaceImpl)
