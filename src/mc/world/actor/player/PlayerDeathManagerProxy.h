#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/IPlayerDeathManagerProxy.h"

class PlayerDeathManagerProxy : public ::IPlayerDeathManagerProxy {
public:
    // prevent constructor by default
    PlayerDeathManagerProxy& operator=(PlayerDeathManagerProxy const&);
    PlayerDeathManagerProxy(PlayerDeathManagerProxy const&);
    PlayerDeathManagerProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerDeathManagerProxy() = default;

    // vIndex: 1
    virtual class Actor* fetchActor(struct ActorUniqueID actorUniqueID) const;

    // vIndex: 2
    virtual bool shouldShowDeathMessages() const;

    MCAPI explicit PlayerDeathManagerProxy(class ServerLevel& serverLevel);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class Actor* fetchActor$(struct ActorUniqueID actorUniqueID) const;

    MCAPI bool shouldShowDeathMessages$() const;

    // NOLINTEND
};
