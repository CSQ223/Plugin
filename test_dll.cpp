#include "Interface.h"
#include "PluginManager.h"
#include <iostream>

typedef void *(*Factory)();

int main(int argc, char *argv[])
{
    PluginManager plugin_manager;
    void *ptr = plugin_manager.Get("Interface");
    if (nullptr != ptr)
    {
        std::shared_ptr<Interface> interface {
            (Interface *)(ptr)
        };
        interface->Debug("dll debug logging");
    }

    ptr = plugin_manager.Get("Interface");
    if (nullptr != ptr)
    {
        std::shared_ptr<Interface> interface {
            (Interface *)(ptr)
        };
        interface->Debug("dll debug logging");
    }

    return 0;
}
