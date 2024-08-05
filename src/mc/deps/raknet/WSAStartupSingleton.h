#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WSAStartupSingleton {
public:
    // prevent constructor by default
    WSAStartupSingleton& operator=(WSAStartupSingleton const&);
    WSAStartupSingleton(WSAStartupSingleton const&);
    WSAStartupSingleton();

public:
    // NOLINTBEGIN
    MCAPI static void AddRef();

    MCAPI static void Deref();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static int refCount;

    // NOLINTEND
};
