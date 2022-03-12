#ifndef TEST_TEST_INTERFACE_H
#define TEST_TEST_INTERFACE_H

#include <memory>

class Interface
{
public:
    Interface();
    virtual ~Interface();

    static std::shared_ptr<Interface> GetInterface();

    virtual void Debug(const char *msg) = 0;
};

#endif // TEST_TEST_INTERFACE_H
