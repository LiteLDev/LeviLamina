#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientOrServerNetworkSystemRef {
public:
    // prevent constructor by default
    ClientOrServerNetworkSystemRef& operator=(ClientOrServerNetworkSystemRef const&);
    ClientOrServerNetworkSystemRef(ClientOrServerNetworkSystemRef const&);
    ClientOrServerNetworkSystemRef();

public:
    // NOLINTBEGIN
    // symbol: ?toServerNetworkSystem@ClientOrServerNetworkSystemRef@@QEAAAEAVServerNetworkSystem@@XZ
    MCAPI class ServerNetworkSystem& toServerNetworkSystem();

    // NOLINTEND
};
