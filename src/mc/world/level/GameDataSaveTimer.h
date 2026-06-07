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
    MCNAPI bool areStorageActionsAllowed() const;

    MCNAPI ::std::chrono::steady_clock::time_point
    calculateNextGameDataSaveTime(::std::chrono::steady_clock::time_point currentTime) const;

    MCNAPI bool isNextGameDataSaveTimeSet() const;

    MCNAPI bool isTimeForGameDataSave(::std::chrono::steady_clock::time_point currentTime) const;

    MCNAPI bool isTimeForStorageCheck(::std::chrono::steady_clock::time_point currentTime) const;

    MCNAPI void onAppSuspend();

    MCNAPI void onStartLeaveGame();

    MCNAPI void onUpdateAfterStorageDeferred(::std::chrono::steady_clock::time_point currentTime);

    MCNAPI ::std::shared_ptr<void*> requestTimedStorageDeferment();

    MCNAPI void setNextGameDataSaveTime(::std::chrono::steady_clock::time_point nextGameDataSaveTime);

    MCNAPI void setNextStorageCheckTime(::std::chrono::steady_clock::time_point nextStorageCheckTime);

    MCNAPI void setWasStorageSavePreviouslyDeferred(bool wasStorageSavePreviouslyDeferred);

    MCNAPI bool wasStorageSavePreviouslyDeferred() const;

    MCNAPI ~GameDataSaveTimer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::chrono::steady_clock::time_point
    calculateNextStorageCheckTime(::std::chrono::steady_clock::time_point currentTime);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
