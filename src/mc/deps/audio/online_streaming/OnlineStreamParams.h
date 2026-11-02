#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineStreamParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk4d4c10;
    ::ll::UntypedStorage<8, 24> mUnkcba588;
    ::ll::UntypedStorage<8, 72> mUnk57f07f;
    ::ll::UntypedStorage<4, 4>  mUnk346266;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineStreamParams& operator=(OnlineStreamParams const&);
    OnlineStreamParams(OnlineStreamParams const&);
    OnlineStreamParams();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~OnlineStreamParams();
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

} // namespace Audio
