#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/CountTracker.h"

class GameDataSaveTimer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNextSaveDataTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds const>        mSaveTimeInterval;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNextStorageCheckTime;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::CountTracker>     mDeferStorageActionsRefCount;
    ::ll::TypedStorage<1, 1, bool>                                    mWasStoragePreviouslyDeferred;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GameDataSaveTimer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
