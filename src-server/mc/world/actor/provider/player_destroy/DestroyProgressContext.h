#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerDestroy {

struct DestroyProgressContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8ec89e;
    ::ll::UntypedStorage<8, 8> mUnk41e0f9;
    ::ll::UntypedStorage<8, 8> mUnk1d7687;
    ::ll::UntypedStorage<8, 8> mUnk94f3bc;
    ::ll::UntypedStorage<1, 1> mUnkd6c618;
    ::ll::UntypedStorage<1, 1> mUnkac294f;
    ::ll::UntypedStorage<1, 1> mUnk21aa27;
    ::ll::UntypedStorage<1, 1> mUnk7942da;
    ::ll::UntypedStorage<1, 1> mUnk1bbfac;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyProgressContext& operator=(DestroyProgressContext const&);
    DestroyProgressContext(DestroyProgressContext const&);
    DestroyProgressContext();

};

}
