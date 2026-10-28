#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/RecentlyPlayedLoadError.h"

// auto generated forward declare list
// clang-format off
namespace World { struct RecentlyPlayedEntry; }
// clang-format on

namespace World {

struct RecentlyPlayedStoreLoadData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::World::RecentlyPlayedEntry>>     mEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::RecentlyPlayedLoadError>> mWarnings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RecentlyPlayedStoreLoadData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
