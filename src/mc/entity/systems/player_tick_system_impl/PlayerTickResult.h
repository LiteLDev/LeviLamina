#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerTickSystemImpl {

struct PlayerTickResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> mTicksToDequeue;
    ::ll::TypedStorage<1, 1, bool>  mProcessTop;
    // NOLINTEND
};

} // namespace PlayerTickSystemImpl
