#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class HurtOnConditionSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    HurtOnConditionSystem& operator=(HurtOnConditionSystem const&);
    HurtOnConditionSystem(HurtOnConditionSystem const&);
    HurtOnConditionSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HurtOnConditionSystem@@UEAA@XZ
    virtual ~HurtOnConditionSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@HurtOnConditionSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND
};
