#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
struct ActorDieEvent;
// clang-format on

class HoldBlockSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry&) /*override*/;

    // vIndex: 1
    virtual void registerEvents(::entt::dispatcher& dispatcher) /*override*/;

    // vIndex: 0
    virtual ~HoldBlockSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _holdBlockSystemOnActorDie(::ActorDieEvent& dieEvent);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry&);

    MCNAPI void $registerEvents(::entt::dispatcher& dispatcher);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
