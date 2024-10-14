#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

class LevelChunkSaveManager {
public:
    // prevent constructor by default
    LevelChunkSaveManager& operator=(LevelChunkSaveManager const&);
    LevelChunkSaveManager(LevelChunkSaveManager const&);
    LevelChunkSaveManager();

public:
    // NOLINTBEGIN
    MCAPI LevelChunkSaveManager(
        std::unique_ptr<class ILevelChunkSaveManagerProxy>                          levelChunkSaverProxy,
        gsl::not_null<class StackRefResult<class GameplayUserManager const>> const& gameplayUserManager,
        gsl::not_null<class StackRefResult<class DimensionManager>> const&          dimensionManager
    );

    MCAPI bool isChunkSaveInProgress();

    MCAPI void
    registerForLevelChunkManagerEvents(class ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI void startLeaveGame();

    MCAPI void trySaveChunks();

    MCAPI ~LevelChunkSaveManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _findRandomChunkToSave();

    MCAPI void
    _onChunkLoaded(class ChunkSource& chunkSource, class LevelChunk& levelChunk, int closestPlayerDistanceSquared);

    MCAPI bool _shouldDoSave() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
