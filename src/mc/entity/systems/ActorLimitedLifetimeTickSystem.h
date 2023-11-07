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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ActorLimitedLifetimeTickSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@ActorLimitedLifetimeTickSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // NOLINTEND
};
