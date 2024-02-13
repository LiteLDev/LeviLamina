#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class BreakBlocksSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BreakBlocksSystem& operator=(BreakBlocksSystem const&);
    BreakBlocksSystem(BreakBlocksSystem const&);
    BreakBlocksSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BreakBlocksSystem@@UEAA@XZ
    virtual ~BreakBlocksSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@BreakBlocksSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@BreakBlocksSystem@@CAXAEAVActorOwnerComponent@@AEAVBreakBlocksComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class BreakBlocksComponent& breakBlocksComponent);

    // NOLINTEND
};
