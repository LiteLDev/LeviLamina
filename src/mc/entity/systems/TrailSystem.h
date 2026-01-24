#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"
#include "mc/world/level/BlockPos.h"

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
        ::ll::TypedStorage<4, 48, ::BlockPos[4]> mBlockPos;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::EntityRegistry& registry) /*override*/;

    virtual ~TrailSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TrailSystem::BlockPositions _calculateBlockSpawnPositions(::Actor& actor, ::Vec3& offset);

    MCAPI static void _tickComponent(::ActorOwnerComponent& actorOwnerComponent, ::TrailComponent& trailComponent);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::EntityRegistry& registry);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
