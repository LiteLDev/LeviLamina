#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class DetectObstacle; }
namespace AgentComponents { class DetectRedstone; }
// clang-format on

class AgentDetectCommandSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentDetectCommandSystem& operator=(AgentDetectCommandSystem const&);
    AgentDetectCommandSystem(AgentDetectCommandSystem const&);
    AgentDetectCommandSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AgentDetectCommandSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    MCAPI static void initializeObstacle(class EntityContext& entity, class AgentComponents::DetectObstacle&);

    MCAPI static void initializeRedstone(class EntityContext& entity, class AgentComponents::DetectRedstone&);

    // NOLINTEND
};
