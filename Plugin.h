#ifndef TEST_TEST_PLUGIN_H
#define TEST_TEST_PLUGIN_H

#include <string>

class Plugin
{
public:
    Plugin();
    ~Plugin();

    bool Open(const char *library);
    bool Close();
    void *GetSymbols(const char *symbols);

private:
    void *module;
};

#endif // TEST_TEST_PLUGIN_H
