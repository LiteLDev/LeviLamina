#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AngrySystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AngrySystem& operator=(AngrySystem const&);
    AngrySystem(AngrySystem const&);
    AngrySystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AngrySystem@@UEAA@XZ
    virtual ~AngrySystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@AngrySystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@AngrySystem@@CAXAEAVEntityContext@@AEAVAngryComponent@@@Z
    MCAPI static void _tickComponent(class EntityContext& entity, class AngryComponent& angryComponent);

    // NOLINTEND
};
