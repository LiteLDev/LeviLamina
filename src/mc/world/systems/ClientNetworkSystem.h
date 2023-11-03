#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientNetworkSystem {
public:
    // prevent constructor by default
    ClientNetworkSystem& operator=(ClientNetworkSystem const&);
    ClientNetworkSystem(ClientNetworkSystem const&);
    ClientNetworkSystem();
};
