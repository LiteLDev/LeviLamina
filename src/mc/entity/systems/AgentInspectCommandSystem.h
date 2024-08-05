#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class AgentInspectCommandSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentInspectCommandSystem& operator=(AgentInspectCommandSystem const&);
    AgentInspectCommandSystem(AgentInspectCommandSystem const&);
    AgentInspectCommandSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AgentInspectCommandSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void tick(class EntityRegistry&);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND
};
