#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst::Details {

struct WorkTargetItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mWorkerCount;
    ::ll::TypedStorage<8, 8, uint64> mKickCount;
    // NOLINTEND
};

} // namespace Bedrock::Threading::Burst::Details
