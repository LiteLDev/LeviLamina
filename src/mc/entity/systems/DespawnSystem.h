#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class DespawnSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    DespawnSystem& operator=(DespawnSystem const&);
    DespawnSystem(DespawnSystem const&);
    DespawnSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DespawnSystem@@UEAA@XZ
    virtual ~DespawnSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@DespawnSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@DespawnSystem@@CAXAEAVActorOwnerComponent@@AEAVDespawnComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class DespawnComponent&);

    // NOLINTEND
};
