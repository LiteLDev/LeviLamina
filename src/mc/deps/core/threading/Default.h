#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst::Strategy {

class Default {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mPrimaryWorkerCount;
    ::ll::TypedStorage<8, 8, uint64> mSecondaryWorkerCount;
    // NOLINTEND
};

} // namespace Bedrock::Threading::Burst::Strategy
