#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/chunk/ILevelChunkSaveManagerProxy.h"

class LevelChunkSaveManagerProxy : public ::ILevelChunkSaveManagerProxy {
public:
    // prevent constructor by default
    LevelChunkSaveManagerProxy& operator=(LevelChunkSaveManagerProxy const&);
    LevelChunkSaveManagerProxy(LevelChunkSaveManagerProxy const&);
    LevelChunkSaveManagerProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelChunkSaveManagerProxy() = default;

    // vIndex: 1
    virtual class WeakRef<class Dimension> getRandomDimension(class DimensionManager& dimensionManager) const;

    // vIndex: 2
    virtual std::shared_ptr<class LevelChunk> getRandomChunk(class Dimension& dimension) const;

    // vIndex: 3
    virtual std::shared_ptr<class LevelChunk>
    getChunk(class Dimension& dimension, class ChunkPos const& chunkPos) const;

    // vIndex: 4
    virtual bool doesNonActorDataInLevelChunkNeedSaving(
        class LevelChunk const& levelChunk,
        int                     minTicksBeforeLiveSave,
        int                     maxTicksBeforeLiveSave
    ) const;

    // vIndex: 5
    virtual bool
    doesLevelChunkNeedSaving(class LevelChunk const& levelChunk, int minTicksBeforeLiveSave, int maxTicksBeforeLiveSave)
        const;

    // vIndex: 6
    virtual void saveLiveChunk(class Dimension& dimension, class LevelChunk& levelChunk);

    // vIndex: 7
    virtual void queueTaskForChunkSave(std::function<class TaskResult()> task);

    // vIndex: 8
    virtual void startLeaveGame();

    MCAPI LevelChunkSaveManagerProxy(class Random& random, class Scheduler& scheduler);

    // NOLINTEND
};
