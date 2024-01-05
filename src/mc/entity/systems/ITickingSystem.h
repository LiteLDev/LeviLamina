#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ISystem.h"

class ITickingSystem : public ::ISystem {
public:
    // prevent constructor by default
    ITickingSystem& operator=(ITickingSystem const&);
    ITickingSystem(ITickingSystem const&);
    ITickingSystem();

public:
    // NOLINTBEGIN
    // symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    MCVAPI void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    MCVAPI void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // NOLINTEND
};
