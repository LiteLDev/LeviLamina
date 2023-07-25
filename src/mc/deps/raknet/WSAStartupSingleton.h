#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WSAStartupSingleton {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WSASTARTUPSINGLETON
public:
    WSAStartupSingleton& operator=(WSAStartupSingleton const&) = delete;
    WSAStartupSingleton(WSAStartupSingleton const&)            = delete;
    WSAStartupSingleton()                                      = delete;
#endif

public:
    /**
     * @symbol ?AddRef\@WSAStartupSingleton\@\@SAXXZ
     */
    MCAPI static void AddRef();
    /**
     * @symbol ?Deref\@WSAStartupSingleton\@\@SAXXZ
     */
    MCAPI static void Deref();

    // protected:

protected:
    /**
     * @symbol ?refCount\@WSAStartupSingleton\@\@1HA
     */
    MCAPI static int refCount;
};
