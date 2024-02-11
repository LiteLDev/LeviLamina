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

    // vIndex: 2, symbol: ?tick@AngrySystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tickComponent@AngrySystem@@CAXAEAVEntityContext@@AEAVAngryComponent@@@Z
    MCAPI static void _tickComponent(class EntityContext& entity, class AngryComponent& angryComponent);

    // NOLINTEND
};
