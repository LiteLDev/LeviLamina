#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class LevelChunkSaveManager {
public:
    // prevent constructor by default
    LevelChunkSaveManager& operator=(LevelChunkSaveManager const&);
    LevelChunkSaveManager(LevelChunkSaveManager const&);
    LevelChunkSaveManager();

public:
    // NOLINTBEGIN
    MCAPI
    LevelChunkSaveManager(std::unique_ptr<class ILevelChunkSaveManagerProxy>, gsl::not_null<class StackRefResult<class GameplayUserManager const>> const&, gsl::not_null<class StackRefResult<class DimensionManager>> const&);

    MCAPI bool isChunkSaveInProgress();

    MCAPI void registerForLevelChunkManagerEvents(class ILevelChunkEventManagerConnector&);

    MCAPI void startLeaveGame();

    MCAPI void trySaveChunks();

    MCAPI ~LevelChunkSaveManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _findRandomChunkToSave();

    MCAPI void _onChunkLoaded(class ChunkSource&, class LevelChunk&, int);

    MCAPI bool _shouldDoSave() const;

    // NOLINTEND
};
