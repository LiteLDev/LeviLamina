#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class ActorLimitedLifetimeTickSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    ActorLimitedLifetimeTickSystem& operator=(ActorLimitedLifetimeTickSystem const&);
    ActorLimitedLifetimeTickSystem(ActorLimitedLifetimeTickSystem const&);
    ActorLimitedLifetimeTickSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorLimitedLifetimeTickSystem@@UEAA@XZ
    virtual ~ActorLimitedLifetimeTickSystem() = default;

    // vIndex: 2, symbol: ?tick@ActorLimitedLifetimeTickSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND
};
