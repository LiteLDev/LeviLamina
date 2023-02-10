/**
 * @file  WSAStartupSingleton.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1916232523
     * @symbol  ?AddRef\@WSAStartupSingleton\@\@SAXXZ
     */
    MCAPI static void AddRef();
    /**
     * @hash   -1543892937
     * @symbol  ?Deref\@WSAStartupSingleton\@\@SAXXZ
     */
    MCAPI static void Deref();

//protected:

protected:
    /**
     * @hash   1059225114
     * @symbol  ?refCount\@WSAStartupSingleton\@\@1HA
     */
    MCAPI static int refCount;

};