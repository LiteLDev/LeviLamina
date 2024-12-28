#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameDataSaveTimer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc691c4;
    ::ll::UntypedStorage<8, 8>  mUnk4b0009;
    ::ll::UntypedStorage<8, 8>  mUnk2d9edd;
    ::ll::UntypedStorage<8, 16> mUnk88c27e;
    ::ll::UntypedStorage<1, 1>  mUnk55e648;
    // NOLINTEND

public:
    // prevent constructor by default
    GameDataSaveTimer& operator=(GameDataSaveTimer const&);
    GameDataSaveTimer(GameDataSaveTimer const&);
    GameDataSaveTimer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GameDataSaveTimer(::std::chrono::nanoseconds saveTimeInterval);

    MCAPI bool areStorageActionsAllowed() const;

    MCAPI ::std::chrono::steady_clock::time_point
    calculateNextGameDataSaveTime(::std::chrono::steady_clock::time_point currentTime) const;

    MCAPI bool isNextGameDataSaveTimeSet() const;

    MCAPI bool isTimeForGameDataSave(::std::chrono::steady_clock::time_point currentTime) const;

    MCAPI bool isTimeForStorageCheck(::std::chrono::steady_clock::time_point currentTime) const;

    MCAPI void onAppSuspend();

    MCAPI void onStartLeaveGame();

    MCAPI void onUpdateAfterStorageDeferred(::std::chrono::steady_clock::time_point currentTime);

    MCAPI ::std::shared_ptr<void*> requestTimedStorageDeferment();

    MCAPI void setNextGameDataSaveTime(::std::chrono::steady_clock::time_point nextGameDataSaveTime);

    MCAPI void setNextStorageCheckTime(::std::chrono::steady_clock::time_point nextStorageCheckTime);

    MCAPI void setWasStorageSavePreviouslyDeferred(bool wasStorageSavePreviouslyDeferred);

    MCAPI bool wasStorageSavePreviouslyDeferred() const;

    MCAPI ~GameDataSaveTimer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::chrono::steady_clock::time_point
    calculateNextStorageCheckTime(::std::chrono::steady_clock::time_point currentTime);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::chrono::nanoseconds saveTimeInterval);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
