#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class GroupSizeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    GroupSizeSystem& operator=(GroupSizeSystem const&);
    GroupSizeSystem(GroupSizeSystem const&);
    GroupSizeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GroupSizeSystem@@UEAA@XZ
    virtual ~GroupSizeSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@GroupSizeSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@GroupSizeSystem@@CAXAEAVActorOwnerComponent@@AEAVGroupSizeComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class GroupSizeComponent& groupSizeComponent);

    // NOLINTEND
};
