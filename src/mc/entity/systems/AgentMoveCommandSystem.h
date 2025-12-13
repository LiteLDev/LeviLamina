#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
namespace AgentComponents { class Move; }
namespace AgentComponents { struct ActionDetails; }
// clang-format on

class AgentMoveCommandSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;

    virtual ~AgentMoveCommandSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void cleanUp(::EntityContext& agent, float cooldownTime);

    MCNAPI static void
    initialize(::EntityContext& entity, ::AgentComponents::ActionDetails& details, ::AgentComponents::Move& moveComp);

    MCNAPI static void
    tickMove(::EntityContext& entity, ::AgentComponents::ActionDetails& details, ::AgentComponents::Move& moveComp);
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
