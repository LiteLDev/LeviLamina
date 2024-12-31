#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntityRegistry;
struct TrailComponent;
// clang-format on

class TrailSystem : public ::ITickingSystem {
public:
    // TrailSystem inner types declare
    // clang-format off
    struct BlockPositions;
    // clang-format on

    // TrailSystem inner types define
    struct BlockPositions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 48> mUnk371d16;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockPositions& operator=(BlockPositions const&);
        BlockPositions(BlockPositions const&);
        BlockPositions();
    };

public:
    // prevent constructor by default
    TrailSystem& operator=(TrailSystem const&);
    TrailSystem(TrailSystem const&);
    TrailSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 0
    virtual ~TrailSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tickComponent(::ActorOwnerComponent& actorOwnerComponent, ::TrailComponent& trailComponent);
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
