#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlinePlayRequest {
public:
    // OnlinePlayRequest inner types declare
    // clang-format off
    struct AfterDelay;
    struct OnSignal;
    struct WhenReady;
    // clang-format on

    // OnlinePlayRequest inner types define
    struct AfterDelay {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkf0763a;
        // NOLINTEND

    public:
        // prevent constructor by default
        AfterDelay& operator=(AfterDelay const&);
        AfterDelay(AfterDelay const&);
        AfterDelay();
    };

    struct OnSignal {};

    struct WhenReady {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkbbf627;
    ::ll::UntypedStorage<4, 4>  mUnk1f32ae;
    ::ll::UntypedStorage<4, 4>  mUnk12c673;
    ::ll::UntypedStorage<8, 40> mUnk3fece2;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlinePlayRequest& operator=(OnlinePlayRequest const&);
    OnlinePlayRequest(OnlinePlayRequest const&);
    OnlinePlayRequest();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~OnlinePlayRequest();
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
