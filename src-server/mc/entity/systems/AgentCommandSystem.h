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
    MCNAPI static void cleanUp(::EntityContext& agent, float waitingPeriod);

    MCNAPI static void initialize(::EntityContext& entity);

    MCNAPI static void tickAgentCooldown(::EntityContext& entity, ::AgentComponents::CommandCooldown& waitComp);

    MCNAPI static void tickLegacy(::EntityContext& entity, ::AgentCommandComponent& agentComp);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry& registry);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
