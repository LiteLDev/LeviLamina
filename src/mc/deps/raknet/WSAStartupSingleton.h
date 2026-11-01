#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WSAStartupSingleton {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int& refCount();
    // NOLINTEND
};
