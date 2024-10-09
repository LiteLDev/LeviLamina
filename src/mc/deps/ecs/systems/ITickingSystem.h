#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ISystem.h"

class ITickingSystem : public ::ISystem {
public:
    // prevent constructor by default
    ITickingSystem& operator=(ITickingSystem const&);
    ITickingSystem(ITickingSystem const&);
    ITickingSystem();

public:
    // NOLINTBEGIN
    MCVAPI void singleTick(class EntityRegistry& registry, class StrictEntityContext& entityContext);

    MCVAPI void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // NOLINTEND
};
