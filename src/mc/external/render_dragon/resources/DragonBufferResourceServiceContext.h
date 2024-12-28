#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

struct DragonBufferResourceServiceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk71646d;
    ::ll::UntypedStorage<8, 8> mUnk4d1ebe;
    ::ll::UntypedStorage<8, 8> mUnkafc413;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonBufferResourceServiceContext& operator=(DragonBufferResourceServiceContext const&);
    DragonBufferResourceServiceContext(DragonBufferResourceServiceContext const&);
    DragonBufferResourceServiceContext();
};

} // namespace dragon
