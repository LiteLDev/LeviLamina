#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorOwnerComponent;
class BlockSource;
class EntityRegistry;
class LevelChunk;
class LoadedChunksComponent;
struct Tick;
// clang-format on

class LevelChunkTickingSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 0
    virtual ~LevelChunkTickingSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _determineLevelChunksToTick(
        ::Actor const&                                  actor,
        ::BlockSource&                                  region,
        ::LoadedChunksComponent&                        loadedChunksComponent,
        ::std::vector<::std::shared_ptr<::LevelChunk>>& levelChunksToTick,
        ::std::vector<::std::shared_ptr<::LevelChunk>>& levelChunksBlockEntitiesToTick,
        ::Tick const&                                   currentTick
    );

    MCNAPI static void
    _tickLevelChunksAroundActor(::Actor& actor, ::BlockSource& region, ::LoadedChunksComponent& loadedChunksComponent);

    MCNAPI static void _tickLevelChunksAroundActorView(
        ::ActorOwnerComponent&   actorOwnerComponent,
        ::LoadedChunksComponent& loadedChunksComponent
    );
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
