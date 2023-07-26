#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LocalConnectivitySystem {

public:
    // prevent constructor by default
    LocalConnectivitySystem& operator=(LocalConnectivitySystem const&) = delete;
    LocalConnectivitySystem(LocalConnectivitySystem const&)            = delete;
    LocalConnectivitySystem()                                          = delete;
};
