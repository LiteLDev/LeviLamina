#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class OSThreadPriority {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk74690e;
    // NOLINTEND

public:
    // prevent constructor by default
    OSThreadPriority& operator=(OSThreadPriority const&);
    OSThreadPriority(OSThreadPriority const&);
    OSThreadPriority();

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
