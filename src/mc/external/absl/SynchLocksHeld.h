#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

struct SynchLocksHeld {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk86f790;
    ::ll::UntypedStorage<1, 1>   mUnka89325;
    ::ll::UntypedStorage<8, 960> mUnk2db9e0;
    // NOLINTEND

public:
    // prevent constructor by default
    SynchLocksHeld& operator=(SynchLocksHeld const&);
    SynchLocksHeld(SynchLocksHeld const&);
    SynchLocksHeld();
};

} // namespace absl
