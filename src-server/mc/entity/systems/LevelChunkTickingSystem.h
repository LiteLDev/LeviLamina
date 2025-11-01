#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class EntityRegistry;
class LevelChunk;
class LoadedChunksComponent;
struct Tick;
// clang-format on

class LevelChunkTickingSystem : public ::ITickingSystem {
public:
    // LevelChunkTickingSystem inner types define
    using LevelChunks = ::std::vector<::std::shared_ptr<::LevelChunk>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::LevelChunk>>> mScratchLevelChunksToTick;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::LevelChunk>>> mScratchLevelChunksBlockEntitiesToTick;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 0
    virtual ~LevelChunkTickingSystem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    _tickLevelChunksAroundActor(::Actor& actor, ::BlockSource& region, ::LoadedChunksComponent& loadedChunksComponent);
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
