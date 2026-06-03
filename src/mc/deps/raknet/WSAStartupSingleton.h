#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WSAStartupSingleton {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int& refCount();
    // NOLINTEND
};
