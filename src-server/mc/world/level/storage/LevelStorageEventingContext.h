#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelStorageEventingContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mCreationReason;
    ::ll::TypedStorage<8, 32, ::std::string> mLevelId;
    ::ll::TypedStorage<1, 1, bool> mIsFromWorldTemplate;
    ::ll::TypedStorage<4, 4, uint> mWorldStartCount;
    ::ll::TypedStorage<8, 32, ::std::string> mLastOpenedWithVersion;
    ::ll::TypedStorage<8, 8, int64> mLastSavedTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LevelStorageEventingContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
