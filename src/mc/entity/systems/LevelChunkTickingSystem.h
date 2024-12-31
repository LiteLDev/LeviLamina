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
struct TickingSystemWithInfo;
// clang-format on

class LevelChunkTickingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    LevelChunkTickingSystem& operator=(LevelChunkTickingSystem const&);
    LevelChunkTickingSystem(LevelChunkTickingSystem const&);
    LevelChunkTickingSystem();

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
    MCAPI static void _determineLevelChunksToTick(
        ::Actor const&                                  actor,
        ::BlockSource&                                  region,
        ::LoadedChunksComponent&                        loadedChunksComponent,
        ::std::vector<::std::shared_ptr<::LevelChunk>>& levelChunksToTick,
        ::std::vector<::std::shared_ptr<::LevelChunk>>& levelChunksBlockEntitiesToTick,
        ::Tick const&                                   currentTick
    );

    MCAPI static void
    _tickLevelChunksAroundActor(::Actor& actor, ::BlockSource& region, ::LoadedChunksComponent& loadedChunksComponent);

    MCAPI static void _tickLevelChunksAroundActorView(
        ::ActorOwnerComponent&   actorOwnerComponent,
        ::LoadedChunksComponent& loadedChunksComponent
    );

    MCAPI static ::TickingSystemWithInfo createPlayerPassengerSystem();
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
