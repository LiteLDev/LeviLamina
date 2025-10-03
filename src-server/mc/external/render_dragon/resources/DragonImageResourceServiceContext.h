#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

struct DragonImageResourceServiceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk64eedc;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonImageResourceServiceContext& operator=(DragonImageResourceServiceContext const&);
    DragonImageResourceServiceContext(DragonImageResourceServiceContext const&);
    DragonImageResourceServiceContext();
};

} // namespace dragon
