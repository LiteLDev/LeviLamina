#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientNetworkSystem {
public:
    // prevent constructor by default
    ClientNetworkSystem& operator=(ClientNetworkSystem const&);
    ClientNetworkSystem(ClientNetworkSystem const&);
    ClientNetworkSystem();

public:
    // NOLINTBEGIN
    MCAPI std::optional<class NetworkIdentifier> tryGetLocalNetworkId() const;

    MCAPI std::optional<class NetworkIdentifier> tryGetServerId() const;

    // NOLINTEND
};
