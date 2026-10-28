#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/RecentlyPlayedTarget.h"

namespace World {

struct RecentlyPlayedEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 488, ::World::RecentlyPlayedTarget> mTarget;
    ::ll::TypedStorage<8, 32, ::std::string>                  mDisplayName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mCachedImagePath;
    ::ll::TypedStorage<8, 8, int64>                           mLastSuccessfulJoinTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RecentlyPlayedEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace World
