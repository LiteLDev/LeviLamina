#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class HomeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    HomeSystem& operator=(HomeSystem const&);
    HomeSystem(HomeSystem const&);
    HomeSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HomeSystem@@UEAA@XZ
    virtual ~HomeSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@HomeSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@HomeSystem@@CAXAEAVActorOwnerComponent@@AEAVHomeComponent@@@Z
    MCAPI static void _tickComponent(class ActorOwnerComponent&, class HomeComponent&);

    // NOLINTEND
};
