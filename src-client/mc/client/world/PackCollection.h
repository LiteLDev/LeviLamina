#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"

// auto generated forward declare list
// clang-format off
namespace World { struct PackDetails; }
// clang-format on

namespace World {

struct PackCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContentType>                        mContentType;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>> mActive;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>> mGlobal;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>> mAvailable;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>> mRealms;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>> mUnowned;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PackCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
