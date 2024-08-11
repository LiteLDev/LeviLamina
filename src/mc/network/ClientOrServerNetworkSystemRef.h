#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/ClientNetworkSystem.h"
#include "mc/network/ServerNetworkSystem.h"

class ClientOrServerNetworkSystemRef {
public:
    using ClientRefT = std::reference_wrapper<ClientNetworkSystem>;
    using ServerRefT = std::reference_wrapper<ServerNetworkSystem>;

    std::variant<ClientRefT, ServerRefT> ref;

    ClientNetworkSystem& toClientNetworkSystem() { return std::get<ClientRefT>(ref).get(); }

public:
    // NOLINTBEGIN
    MCAPI class ServerNetworkSystem& toServerNetworkSystem();

    // NOLINTEND
};
