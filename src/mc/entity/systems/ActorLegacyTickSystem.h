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

    // vIndex: 2, symbol: ?tick@ActorLegacyTickSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // symbol:
    // ?tickActorLegacyTickSystem@ActorLegacyTickSystem@@SAXAEAVEntityContext@@AEAVActor@@AEAVActorTickNeededComponent@@@Z
    MCAPI static void
    tickActorLegacyTickSystem(class EntityContext& entity, class Actor& actor, class ActorTickNeededComponent&);

    // NOLINTEND
};
