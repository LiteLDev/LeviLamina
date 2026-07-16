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
#ifdef LL_PLAT_C
    MCNAPI ~PlayerIDs();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Social
