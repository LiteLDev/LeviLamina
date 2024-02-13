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
    // vIndex: 0, symbol: __gen_??1LevelChunkTickingSystem@@UEAA@XZ
    virtual ~LevelChunkTickingSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@LevelChunkTickingSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_determineLevelChunksToTick@LevelChunkTickingSystem@@CAXAEBVActor@@AEAVBlockSource@@AEAVLoadedChunksComponent@@AEAV?$vector@V?$shared_ptr@VLevelChunk@@@std@@V?$allocator@V?$shared_ptr@VLevelChunk@@@std@@@2@@std@@3AEBUTick@@@Z
    MCAPI static void _determineLevelChunksToTick(
        class Actor const& actor,
        class BlockSource& region,
        class LoadedChunksComponent&,
        std::vector<std::shared_ptr<class LevelChunk>>&,
        std::vector<std::shared_ptr<class LevelChunk>>&,
        struct Tick const& currentTick
    );

    // symbol:
    // ?_tickLevelChunksAroundActor@LevelChunkTickingSystem@@CAXAEAVActor@@AEAVBlockSource@@AEAVLoadedChunksComponent@@@Z
    MCAPI static void
    _tickLevelChunksAroundActor(class Actor& actor, class BlockSource& region, class LoadedChunksComponent&);

    // symbol:
    // ?_tickLevelChunksAroundActorView@LevelChunkTickingSystem@@CAXAEAVActorOwnerComponent@@AEAVLoadedChunksComponent@@@Z
    MCAPI static void _tickLevelChunksAroundActorView(class ActorOwnerComponent&, class LoadedChunksComponent&);

    // NOLINTEND
};
