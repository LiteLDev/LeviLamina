#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class AgentCommandComponent;
class EntityContext;
class EntityRegistry;
namespace AgentComponents { class CommandCooldown; }
// clang-format on

class AgentCommandSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    AgentCommandSystem& operator=(AgentCommandSystem const&);
    AgentCommandSystem(AgentCommandSystem const&);
    AgentCommandSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 0
    virtual ~AgentCommandSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void cleanUp(::EntityContext& agent, float waitingPeriod);

    MCAPI static void initialize(::EntityContext& entity);

    MCAPI static void tickAgentCooldown(::EntityContext& entity, ::AgentComponents::CommandCooldown& waitComp);

    MCAPI static void tickLegacy(::EntityContext& entity, ::AgentCommandComponent& agentComp);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::EntityRegistry& registry);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
