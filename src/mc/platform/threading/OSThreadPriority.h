#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class OSThreadPriority {
public:
    // prevent constructor by default
    OSThreadPriority& operator=(OSThreadPriority const&);
    OSThreadPriority(OSThreadPriority const&);
    OSThreadPriority();

public:
    // NOLINTBEGIN
    MCAPI explicit operator int() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class Bedrock::Threading::OSThreadPriority const& Elevated();

    MCAPI static class Bedrock::Threading::OSThreadPriority const& High();

    MCAPI static class Bedrock::Threading::OSThreadPriority const& Low();

    MCAPI static class Bedrock::Threading::OSThreadPriority const& Normal();

    // NOLINTEND
};

}; // namespace Bedrock::Threading
