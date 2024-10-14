#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

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

    MCAPI ServerNetworkController(
        bool                                                             isDedicatedServer,
        class mce::UUID const&                                           hostID,
        std::function<bool(class ServerPlayer const&, ::AbilitiesIndex)> canUseAbility
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool canChangePermission$(class mce::UUID const& playerId, class ServerPlayer const& player) const;

    MCAPI bool isDedicatedServer$() const;

    MCAPI bool isHost$(class mce::UUID const& playerID) const;

    // NOLINTEND
};
