#ifndef TEST_TEST_INTERFACEIMPL_H
#define TEST_TEST_INTERFACEIMPL_H

#include "Interface.h"

class InterfaceImpl : public Interface
{
public:
    InterfaceImpl();
    ~InterfaceImpl();

    void Debug(const char *msg) override;
};

#endif // TEST_TEST_INTERFACEIMPL_H
