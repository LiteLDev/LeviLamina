#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

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
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entityContext);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _determineLevelChunksToTick(
        class Actor const&                              actor,
        class BlockSource&                              region,
        class LoadedChunksComponent&                    loadedChunksComponent,
        std::vector<std::shared_ptr<class LevelChunk>>& levelChunksToTick,
        std::vector<std::shared_ptr<class LevelChunk>>& levelChunksBlockEntitiesToTick,
        struct Tick const&                              currentTick
    );

    MCAPI static void _tickLevelChunksAroundActor(
        class Actor&                 actor,
        class BlockSource&           region,
        class LoadedChunksComponent& loadedChunksComponent
    );

    MCAPI static void _tickLevelChunksAroundActorView(
        class ActorOwnerComponent&   actorOwnerComponent,
        class LoadedChunksComponent& loadedChunksComponent
    );

    // NOLINTEND
};
