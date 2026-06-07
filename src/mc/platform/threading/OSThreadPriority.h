#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class OSThreadPriority {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPriority;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Threading::OSThreadPriority const& Elevated();

    MCAPI static ::Bedrock::Threading::OSThreadPriority const& High();

    MCAPI static ::Bedrock::Threading::OSThreadPriority const& Low();

    MCAPI static ::Bedrock::Threading::OSThreadPriority const& Normal();
    // NOLINTEND
};

} // namespace Bedrock::Threading
