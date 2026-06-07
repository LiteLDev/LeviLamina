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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PlayerIDs& operator=(PlayerIDs const&);
    PlayerIDs(PlayerIDs const&);
    PlayerIDs();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PlayerIDs& operator=(PlayerIDs const&);
    PlayerIDs();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI PlayerIDs(::Social::PlayerIDs const&);
#endif

    MCNAPI ~PlayerIDs();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Social::PlayerIDs const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
