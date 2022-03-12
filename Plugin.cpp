#include "Plugin.h"

#include <Windows.h>

Plugin::Plugin() {}

Plugin::~Plugin() { Close(); }

bool Plugin::Close()
{
    FreeLibrary((HINSTANCE)module);
    return true;
}

bool Plugin::Open(const char *library)
{
    module = LoadLibrary(library);
    if (nullptr != module)
    {
        return true;
    }
    return false;
}

void *Plugin::GetSymbols(const char *symbols)
{
    if (nullptr != module)
    {
        void *factory = (void *)GetProcAddress((HINSTANCE)module, symbols);
        return factory;
    }
    return nullptr;
}
