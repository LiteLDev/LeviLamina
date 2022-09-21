/**
 * @file  MC/WSAStartupSingleton.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WSAStartupSingleton.
 *
 */
class WSAStartupSingleton {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WSASTARTUPSINGLETON
public:
    class WSAStartupSingleton& operator=(class WSAStartupSingleton const &) = delete;
    WSAStartupSingleton(class WSAStartupSingleton const &) = delete;
    WSAStartupSingleton() = delete;
#endif

public:
    /**
     * @hash   1801473605
     * @symbol ?AddRef@WSAStartupSingleton@@SAXXZ
     */
    MCAPI static void AddRef();
    /**
     * @hash   -2121154105
     * @symbol ?Deref@WSAStartupSingleton@@SAXXZ
     */
    MCAPI static void Deref();

//protected:

protected:
    /**
     * @hash   237731562
     * @symbol ?refCount@WSAStartupSingleton@@1HA
     */
    MCAPI static int refCount;

};