#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class VibrationListenerSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    VibrationListenerSystem& operator=(VibrationListenerSystem const&);
    VibrationListenerSystem(VibrationListenerSystem const&);
    VibrationListenerSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VibrationListenerSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND
};
