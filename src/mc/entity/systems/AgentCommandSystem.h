#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
namespace AgentComponents { class CommandCooldown; }
// clang-format on

class AgentCommandSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentCommandSystem& operator=(AgentCommandSystem const&);
    AgentCommandSystem(AgentCommandSystem const&);
    AgentCommandSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AgentCommandSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    MCAPI static void cleanUp(class EntityContext& agent, float);

    MCAPI static void initialize(class EntityContext& entity);

    MCAPI static void tickAgentCooldown(class EntityContext& entity, class AgentComponents::CommandCooldown&);

    MCAPI static void tickLegacy(class EntityContext& entity, class AgentCommandComponent&);

    // NOLINTEND
};
