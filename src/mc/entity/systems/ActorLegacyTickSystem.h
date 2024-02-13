#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class ActorLegacyTickSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    ActorLegacyTickSystem& operator=(ActorLegacyTickSystem const&);
    ActorLegacyTickSystem(ActorLegacyTickSystem const&);
    ActorLegacyTickSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorLegacyTickSystem@@UEAA@XZ
    virtual ~ActorLegacyTickSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@ActorLegacyTickSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // symbol:
    // ?tickActorLegacyTickSystem@ActorLegacyTickSystem@@SAXAEAVEntityContext@@AEAVActor@@AEAVActorTickNeededComponent@@@Z
    MCAPI static void
    tickActorLegacyTickSystem(class EntityContext& entity, class Actor& actor, class ActorTickNeededComponent&);

    // NOLINTEND
};
