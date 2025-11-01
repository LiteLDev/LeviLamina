#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class EntityRegistry;
class Vec3;
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
    MCNAPI static ::TrailSystem::BlockPositions _calculateBlockSpawnPositions(::Actor& actor, ::Vec3& offset);

    MCNAPI static void _tickComponent(::ActorOwnerComponent& actorOwnerComponent, ::TrailComponent& trailComponent);
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
