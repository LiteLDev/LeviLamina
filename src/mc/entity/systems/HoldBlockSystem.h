#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class HoldBlockSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    HoldBlockSystem& operator=(HoldBlockSystem const&);
    HoldBlockSystem(HoldBlockSystem const&);
    HoldBlockSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HoldBlockSystem@@UEAA@XZ
    virtual ~HoldBlockSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@HoldBlockSystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@LootSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry&);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_holdBlockSystemOnActorDie@HoldBlockSystem@@CAXAEAUActorDieEvent@@@Z
    MCAPI static void _holdBlockSystemOnActorDie(struct ActorDieEvent&);

    // NOLINTEND
};
