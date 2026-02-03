#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Detail {

class YieldAfterIterations {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   mCounter;
    ::ll::TypedStorage<2, 2, ushort> mIterationsBeforeYielding;
    ::ll::TypedStorage<2, 2, ushort> mYieldCount;
    // NOLINTEND
};

} // namespace Bedrock::Threading::Detail
