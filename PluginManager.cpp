#include "PluginManager.h"

// xxx::yyy::Class
// xxx.yyy.Class.dll
// void xxx_yyy_Class_create()

#include <iostream>

typedef void *(*Factory)();

void *PluginManager::Get(const char *classname)
{
    std::cout << classname << std::endl;
    if (plugins.find(classname) == plugins.end())
    {
        plugins[classname] = std::make_shared<Plugin>();
    }

    auto module_loaded = plugins.at(classname)->Open("./libInterface.dll");

    if (module_loaded)
    {
        std::cout << classname << " Loaded" << std::endl;
        Factory factory = (Factory)plugins.at(classname)->GetSymbols("Corelib_Interface_Create");
        if (nullptr != factory)
        {
            std::cout << classname << " Factory Loaded" << std::endl;

            return factory();
        }
    }

    return nullptr;
}
