#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class LevelChunkTickingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    LevelChunkTickingSystem& operator=(LevelChunkTickingSystem const&);
    LevelChunkTickingSystem(LevelChunkTickingSystem const&);
    LevelChunkTickingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelChunkTickingSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _determineLevelChunksToTick(
        class Actor const& actor,
        class BlockSource& region,
        class LoadedChunksComponent&,
        std::vector<std::shared_ptr<class LevelChunk>>&,
        std::vector<std::shared_ptr<class LevelChunk>>&,
        struct Tick const& currentTick
    );

    MCAPI static void
    _tickLevelChunksAroundActor(class Actor& actor, class BlockSource& region, class LoadedChunksComponent&);

    MCAPI static void _tickLevelChunksAroundActorView(class ActorOwnerComponent&, class LoadedChunksComponent&);

    // NOLINTEND
};
