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
    // symbol:
    // ??0LevelChunkSaveManager@@QEAA@V?$unique_ptr@VILevelChunkSaveManagerProxy@@U?$default_delete@VILevelChunkSaveManagerProxy@@@std@@@std@@AEBV?$not_null@V?$StackRefResult@$$CBVGameplayUserManager@@@@@gsl@@AEBV?$not_null@V?$StackRefResult@VDimensionManager@@@@@4@@Z
    MCAPI
    LevelChunkSaveManager(std::unique_ptr<class ILevelChunkSaveManagerProxy>, gsl::not_null<class StackRefResult<class GameplayUserManager const>> const&, gsl::not_null<class StackRefResult<class DimensionManager>> const&);

    // symbol: ?isChunkSaveInProgress@LevelChunkSaveManager@@QEAA_NXZ
    MCAPI bool isChunkSaveInProgress();

    // symbol: ?registerForLevelChunkManagerEvents@LevelChunkSaveManager@@QEAAXAEAVILevelChunkEventManagerConnector@@@Z
    MCAPI void registerForLevelChunkManagerEvents(class ILevelChunkEventManagerConnector&);

    // symbol: ?startLeaveGame@LevelChunkSaveManager@@QEAAXXZ
    MCAPI void startLeaveGame();

    // symbol: ?trySaveChunks@LevelChunkSaveManager@@QEAAXXZ
    MCAPI void trySaveChunks();

    // symbol: ??1LevelChunkSaveManager@@QEAA@XZ
    MCAPI ~LevelChunkSaveManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findRandomChunkToSave@LevelChunkSaveManager@@AEAAXXZ
    MCAPI void _findRandomChunkToSave();

    // symbol: ?_onChunkLoaded@LevelChunkSaveManager@@AEAAXAEAVChunkSource@@AEAVLevelChunk@@H@Z
    MCAPI void _onChunkLoaded(class ChunkSource&, class LevelChunk&, int);

    // symbol: ?_shouldDoSave@LevelChunkSaveManager@@AEBA_NXZ
    MCAPI bool _shouldDoSave() const;

    // NOLINTEND
};
