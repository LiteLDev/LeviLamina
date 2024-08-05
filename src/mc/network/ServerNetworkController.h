#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ServerNetworkController {
public:
    // prevent constructor by default
    ServerNetworkController& operator=(ServerNetworkController const&);
    ServerNetworkController(ServerNetworkController const&);
    ServerNetworkController();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerNetworkController() = default;

    // vIndex: 1
    virtual bool isDedicatedServer() const;

    // vIndex: 2
    virtual bool isHost(class mce::UUID const& playerID) const;

    // vIndex: 3
    virtual bool canChangePermission(class mce::UUID const& playerId, class ServerPlayer const& player) const;

    MCAPI
    ServerNetworkController(bool isDedicatedServer, class mce::UUID const&, std::function<bool(class ServerPlayer const&, ::AbilitiesIndex)>);

    // NOLINTEND
};
