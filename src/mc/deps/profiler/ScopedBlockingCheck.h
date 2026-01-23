#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class ScopedBlockingCheck {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkf41f02;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedBlockingCheck& operator=(ScopedBlockingCheck const&);
    ScopedBlockingCheck(ScopedBlockingCheck const&);
    ScopedBlockingCheck();
};

} // namespace Bedrock::Threading
