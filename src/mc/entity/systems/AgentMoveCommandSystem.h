#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class Move; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

class AgentMoveCommandSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentMoveCommandSystem& operator=(AgentMoveCommandSystem const&);
    AgentMoveCommandSystem(AgentMoveCommandSystem const&);
    AgentMoveCommandSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AgentMoveCommandSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    MCAPI static void cleanUp(class EntityContext& agent, float cooldownTime);

    MCAPI static void
    initialize(class EntityContext& entity, struct AgentComponents::ActionDetails& details, class AgentComponents::Move&);

    MCAPI static void
    tickMove(class EntityContext& entity, struct AgentComponents::ActionDetails& details, class AgentComponents::Move&);

    // NOLINTEND
};
