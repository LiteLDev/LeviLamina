#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/RecentlyPlayedTarget.h"

namespace World {

struct RecentlyPlayedPendingTargetData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 488, ::World::RecentlyPlayedTarget> mTarget;
    ::ll::TypedStorage<8, 32, ::std::string>                  mDisplayName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mCachedImagePath;
    // NOLINTEND

public:
    // prevent constructor by default
    RecentlyPlayedPendingTargetData& operator=(RecentlyPlayedPendingTargetData const&);
    RecentlyPlayedPendingTargetData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RecentlyPlayedPendingTargetData(::World::RecentlyPlayedPendingTargetData const&);

    MCAPI ~RecentlyPlayedPendingTargetData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::World::RecentlyPlayedPendingTargetData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace World
