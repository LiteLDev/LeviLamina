#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameDataSaveTimer {
public:
    // prevent constructor by default
    GameDataSaveTimer& operator=(GameDataSaveTimer const&);
    GameDataSaveTimer(GameDataSaveTimer const&);
    GameDataSaveTimer();

public:
    // NOLINTBEGIN
    // symbol: ??0GameDataSaveTimer@@QEAA@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
    MCAPI explicit GameDataSaveTimer(std::chrono::nanoseconds);

    // symbol: ?areStorageActionsAllowed@GameDataSaveTimer@@QEBA_NXZ
    MCAPI bool areStorageActionsAllowed() const;

    // symbol:
    // ?calculateNextGameDataSaveTime@GameDataSaveTimer@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@V234@@Z
    MCAPI std::chrono::steady_clock::time_point calculateNextGameDataSaveTime(std::chrono::steady_clock::time_point
    ) const;

    // symbol: ?isNextGameDataSaveTimeSet@GameDataSaveTimer@@QEBA_NXZ
    MCAPI bool isNextGameDataSaveTimeSet() const;

    // symbol:
    // ?isTimeForGameDataSave@GameDataSaveTimer@@QEBA_NV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI bool isTimeForGameDataSave(std::chrono::steady_clock::time_point) const;

    // symbol:
    // ?isTimeForStorageCheck@GameDataSaveTimer@@QEBA_NV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI bool isTimeForStorageCheck(std::chrono::steady_clock::time_point) const;

    // symbol: ?onAppSuspend@GameDataSaveTimer@@QEAAXXZ
    MCAPI void onAppSuspend();

    // symbol: ?onStartLeaveGame@GameDataSaveTimer@@QEAAXXZ
    MCAPI void onStartLeaveGame();

    // symbol:
    // ?onUpdateAfterStorageDeferred@GameDataSaveTimer@@QEAAXV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI void onUpdateAfterStorageDeferred(std::chrono::steady_clock::time_point);

    // symbol: ?requestTimedStorageDeferment@GameDataSaveTimer@@QEAA?AV?$shared_ptr@PEAX@std@@XZ
    MCAPI std::shared_ptr<void*> requestTimedStorageDeferment();

    // symbol:
    // ?setNextGameDataSaveTime@GameDataSaveTimer@@QEAAXV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI void setNextGameDataSaveTime(std::chrono::steady_clock::time_point);

    // symbol:
    // ?setNextStorageCheckTime@GameDataSaveTimer@@QEAAXV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI void setNextStorageCheckTime(std::chrono::steady_clock::time_point);

    // symbol: ?setWasStorageSavePreviouslyDeferred@GameDataSaveTimer@@QEAAX_N@Z
    MCAPI void setWasStorageSavePreviouslyDeferred(bool);

    // symbol: ?wasStorageSavePreviouslyDeferred@GameDataSaveTimer@@QEBA_NXZ
    MCAPI bool wasStorageSavePreviouslyDeferred() const;

    // symbol: ??1GameDataSaveTimer@@QEAA@XZ
    MCAPI ~GameDataSaveTimer();

    // symbol:
    // ?calculateNextStorageCheckTime@GameDataSaveTimer@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@V234@@Z
    MCAPI static std::chrono::steady_clock::time_point
        calculateNextStorageCheckTime(std::chrono::steady_clock::time_point);

    // NOLINTEND
};
