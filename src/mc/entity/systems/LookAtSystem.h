#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class LookAtSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    LookAtSystem& operator=(LookAtSystem const&);
    LookAtSystem(LookAtSystem const&);
    LookAtSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LookAtSystem@@UEAA@XZ
    virtual ~LookAtSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@LookAtSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // symbol: ?tickLookAtComponent@LookAtSystem@@SAXAEAVActorOwnerComponent@@AEAVLookAtComponent@@@Z
    MCAPI static void tickLookAtComponent(class ActorOwnerComponent&, class LookAtComponent& lookAtComponent);

    // NOLINTEND
};
