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
    // symbol: ??BOSThreadPriority@Threading@Bedrock@@QEBAHXZ
    MCAPI explicit operator int() const;

    // symbol: ?Elevated@OSThreadPriority@Threading@Bedrock@@2V123@B
    MCAPI static class Bedrock::Threading::OSThreadPriority const Elevated;

    // symbol: ?High@OSThreadPriority@Threading@Bedrock@@2V123@B
    MCAPI static class Bedrock::Threading::OSThreadPriority const High;

    // symbol: ?Low@OSThreadPriority@Threading@Bedrock@@2V123@B
    MCAPI static class Bedrock::Threading::OSThreadPriority const Low;

    // symbol: ?Normal@OSThreadPriority@Threading@Bedrock@@2V123@B
    MCAPI static class Bedrock::Threading::OSThreadPriority const Normal;

    // NOLINTEND
};

}; // namespace Bedrock::Threading
