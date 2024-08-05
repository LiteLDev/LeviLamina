#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class OpenDoorAnnotationSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    OpenDoorAnnotationSystem& operator=(OpenDoorAnnotationSystem const&);
    OpenDoorAnnotationSystem(OpenDoorAnnotationSystem const&);
    OpenDoorAnnotationSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OpenDoorAnnotationSystem() = default;

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
