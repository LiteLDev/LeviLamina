#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/world/AutomaticID.h"

class LevelChunkSaveManager {
public:
    // LevelChunkSaveManager inner types declare
    // clang-format off
    struct LevelChunkQueuedSavingElement;
    class CompareLevelChunkQueuedSavingElement;
    // clang-format on

    // LevelChunkSaveManager inner types define
    struct LevelChunkQueuedSavingElement {
    public:
        // prevent constructor by default
        LevelChunkQueuedSavingElement& operator=(LevelChunkQueuedSavingElement const&);
        LevelChunkQueuedSavingElement(LevelChunkQueuedSavingElement const&);
        LevelChunkQueuedSavingElement();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0LevelChunkQueuedSavingElement@LevelChunkSaveManager@@QEAA@VChunkPos@@V?$AutomaticID@VDimension@@H@@H@Z
        MCAPI LevelChunkQueuedSavingElement(class ChunkPos, DimensionType, int);

        // NOLINTEND
    };

    class CompareLevelChunkQueuedSavingElement {
    public:
        // prevent constructor by default
        CompareLevelChunkQueuedSavingElement& operator=(CompareLevelChunkQueuedSavingElement const&);
        CompareLevelChunkQueuedSavingElement(CompareLevelChunkQueuedSavingElement const&);
        CompareLevelChunkQueuedSavingElement();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??RCompareLevelChunkQueuedSavingElement@LevelChunkSaveManager@@QEAA_NAEBULevelChunkQueuedSavingElement@1@0@Z
        MCAPI bool
        operator()(struct LevelChunkSaveManager::LevelChunkQueuedSavingElement const&, struct LevelChunkSaveManager::LevelChunkQueuedSavingElement const&);

        // NOLINTEND
    };

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

    // symbol: ?startLeaveGame@LevelChunkSaveManager@@QEAAXXZ
    MCAPI void startLeaveGame();

    // symbol: ??1LevelChunkSaveManager@@QEAA@XZ
    MCAPI ~LevelChunkSaveManager();

    // NOLINTEND
};
