#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class ScopedBlockingCheck {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mPriorCallback;
    // NOLINTEND
};

} // namespace Bedrock::Threading
