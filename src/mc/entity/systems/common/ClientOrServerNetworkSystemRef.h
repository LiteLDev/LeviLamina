#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/systems/common/ClientNetworkSystem.h"
#include "mc/entity/systems/common/ServerNetworkSystem.h"

class ClientOrServerNetworkSystemRef {
public:
    using ServerRefT = std::reference_wrapper<ServerNetworkSystem>;
    using ClientRefT = std::reference_wrapper<ClientNetworkSystem>;

    std::variant<ClientRefT, ServerRefT> ref;

public:
    // NOLINTBEGIN
    // symbol: ?toServerNetworkSystem@ClientOrServerNetworkSystemRef@@QEAAAEAVServerNetworkSystem@@XZ
    MCAPI class ServerNetworkSystem& toServerNetworkSystem();

    // NOLINTEND
};
