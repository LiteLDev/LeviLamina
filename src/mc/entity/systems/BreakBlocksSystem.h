#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class BreakBlocksComponent;
class EntityRegistry;
// clang-format on

class BreakBlocksSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    BreakBlocksSystem& operator=(BreakBlocksSystem const&);
    BreakBlocksSystem(BreakBlocksSystem const&);
    BreakBlocksSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 0
    virtual ~BreakBlocksSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _tickComponent(::ActorOwnerComponent& actorOwnerComponent, ::BreakBlocksComponent& breakBlocksComponent);
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
