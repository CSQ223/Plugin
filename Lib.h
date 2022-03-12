#ifndef TEST_TEST_LIB_H
#define TEST_TEST_LIB_H

#define define_module(Organization, Interface, Implementation) \
    extern "C" void *Organization##_##Interface##_Create()     \
    {                                                          \
        return new Implementation();                           \
    }

#define corelib_define_module(Interface, Implementation) \
    define_module(Corelib, Interface, Implementation)

#endif // TEST_TEST_LIB_H
