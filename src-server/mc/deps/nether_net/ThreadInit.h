#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct ThreadInit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3fa43e;
    ::ll::UntypedStorage<4, 4> mUnk62d9d9;
    // NOLINTEND

public:
    // prevent constructor by default
    ThreadInit& operator=(ThreadInit const&);
    ThreadInit(ThreadInit const&);
    ThreadInit();
};

} // namespace NetherNet
