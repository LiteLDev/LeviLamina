#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WSAStartupSingleton {

public:
    // prevent constructor by default
    WSAStartupSingleton& operator=(WSAStartupSingleton const&) = delete;
    WSAStartupSingleton(WSAStartupSingleton const&)            = delete;
    WSAStartupSingleton()                                      = delete;

public:
    /**
     * @symbol ?AddRef\@WSAStartupSingleton\@\@SAXXZ
     */
    MCAPI static void AddRef(); // NOLINT
    /**
     * @symbol ?Deref\@WSAStartupSingleton\@\@SAXXZ
     */
    MCAPI static void Deref(); // NOLINT

    // protected:

protected:
    /**
     * @symbol ?refCount\@WSAStartupSingleton\@\@1HA
     */
    MCAPI static int refCount; // NOLINT
};
