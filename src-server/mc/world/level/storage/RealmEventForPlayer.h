#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/RealmEventId.h"

struct RealmEventForPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RealmEventId> mRealmEventId;
    ::ll::TypedStorage<8, 32, ::std::string const> mPlayerXuid;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RealmEventForPlayer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
