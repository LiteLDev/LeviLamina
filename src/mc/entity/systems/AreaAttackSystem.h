#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AreaAttackSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AreaAttackSystem& operator=(AreaAttackSystem const&);
    AreaAttackSystem(AreaAttackSystem const&);
    AreaAttackSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AreaAttackSystem@@UEAA@XZ
    virtual ~AreaAttackSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@AreaAttackSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@AreaAttackSystem@@CAXAEAVActorOwnerComponent@@AEAVAreaAttackComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class AreaAttackComponent&);

    // NOLINTEND
};
