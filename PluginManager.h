#ifndef TEST_TEST_PLUGINMANAGER_H
#define TEST_TEST_PLUGINMANAGER_H

#include <map>
#include <memory>

#include "Plugin.h"

class PluginManager
{
public:
    template <class T>
    std::shared_ptr<T> Get();
    void *Get(const char *classname);

private:
    std::map<std::string, std::shared_ptr<Plugin>> plugins;
};

#endif // TEST_TEST_PLUGINMANAGER_H
