#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WSAStartupSingleton {

public:
    // prevent constructor by default
    WSAStartupSingleton& operator=(WSAStartupSingleton const&) = delete;
    WSAStartupSingleton(WSAStartupSingleton const&)            = delete;
    WSAStartupSingleton()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?AddRef\@WSAStartupSingleton\@\@SAXXZ
     */
    MCAPI static void AddRef();
    /**
     * @symbol ?Deref\@WSAStartupSingleton\@\@SAXXZ
     */
    MCAPI static void Deref();
    // NOLINTEND

protected:
    // NOLINTBEGIN
    /**
     * @symbol ?refCount\@WSAStartupSingleton\@\@1HA
     */
    MCAPI static int refCount;
    // NOLINTEND
};
