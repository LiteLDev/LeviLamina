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
    // symbol: ?tryGetLocalNetworkId@ClientNetworkSystem@@QEBA?AV?$optional@VNetworkIdentifier@@@std@@XZ
    MCAPI std::optional<class NetworkIdentifier> tryGetLocalNetworkId() const;

    // symbol: ?tryGetServerId@ClientNetworkSystem@@QEBA?AV?$optional@VNetworkIdentifier@@@std@@XZ
    MCAPI std::optional<class NetworkIdentifier> tryGetServerId() const;

    // NOLINTEND
};
