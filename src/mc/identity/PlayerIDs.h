#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct PlayerIDs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdfe99d;
    ::ll::UntypedStorage<8, 32> mUnkd4b5d1;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerIDs& operator=(PlayerIDs const&);
    PlayerIDs(PlayerIDs const&);
    PlayerIDs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerIDs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
