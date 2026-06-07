#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WSAStartupSingleton {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void AddRef();

    MCAPI static void Deref();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int& refCount();
    // NOLINTEND
};
