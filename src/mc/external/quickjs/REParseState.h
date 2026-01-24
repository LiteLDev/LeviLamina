#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct REParseState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk1cb521;
    ::ll::UntypedStorage<8, 8>  mUnkbfdab8;
    ::ll::UntypedStorage<8, 8>  mUnk75f771;
    ::ll::UntypedStorage<8, 8>  mUnk4b6e45;
    ::ll::UntypedStorage<4, 4>  mUnk94ca3e;
    ::ll::UntypedStorage<4, 4>  mUnk319be7;
    ::ll::UntypedStorage<4, 4>  mUnk6a57d0;
    ::ll::UntypedStorage<4, 4>  mUnkb98a7b;
    ::ll::UntypedStorage<4, 4>  mUnk233c1b;
    ::ll::UntypedStorage<4, 4>  mUnkf303ba;
    ::ll::UntypedStorage<4, 4>  mUnkc9ffbb;
    ::ll::UntypedStorage<8, 8>  mUnk565139;
    ::ll::UntypedStorage<8, 48> mUnkb55a78;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<1, 128> mUnk901beb;
#else // LL_PLAT_C
    ::ll::UntypedStorage<1, 128> mUnk4b9b23;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    REParseState& operator=(REParseState const&);
    REParseState(REParseState const&);
    REParseState();
};
