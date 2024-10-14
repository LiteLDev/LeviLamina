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
    MCAPI bool areStorageActionsAllowed() const;

    MCAPI std::chrono::steady_clock::time_point calculateNextGameDataSaveTime(std::chrono::steady_clock::time_point
    ) const;

    MCAPI bool isNextGameDataSaveTimeSet() const;

    MCAPI bool isTimeForGameDataSave(std::chrono::steady_clock::time_point currentTime) const;

    MCAPI bool isTimeForStorageCheck(std::chrono::steady_clock::time_point currentTime) const;

    MCAPI void onAppSuspend();

    MCAPI void onStartLeaveGame();

    MCAPI void onUpdateAfterStorageDeferred(std::chrono::steady_clock::time_point currentTime);

    MCAPI std::shared_ptr<void*> requestTimedStorageDeferment();

    MCAPI void setNextGameDataSaveTime(std::chrono::steady_clock::time_point nextGameDataSaveTime);

    MCAPI void setNextStorageCheckTime(std::chrono::steady_clock::time_point nextStorageCheckTime);

    MCAPI void setWasStorageSavePreviouslyDeferred(bool wasStorageSavePreviouslyDeferred);

    MCAPI bool wasStorageSavePreviouslyDeferred() const;

    MCAPI ~GameDataSaveTimer();

    MCAPI static std::chrono::steady_clock::time_point
        calculateNextStorageCheckTime(std::chrono::steady_clock::time_point);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
