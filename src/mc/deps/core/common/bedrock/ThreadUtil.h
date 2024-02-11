#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

namespace Bedrock::Threading {

class ThreadUtil {
public:
    // prevent constructor by default
    ThreadUtil& operator=(ThreadUtil const&);
    ThreadUtil(ThreadUtil const&);
    ThreadUtil();

public:
    // NOLINTBEGIN
    // symbol: ?setCoreAffinity@ThreadUtil@Threading@Bedrock@@SAXAEBQEAXH_K@Z
    MCAPI static void setCoreAffinity(void* const& nativeHandle, int idealCore, uint64 desiredCoreMask);

    // symbol: ?setCurrentThreadCoreAffinity@ThreadUtil@Threading@Bedrock@@SAXH_K@Z
    MCAPI static void setCurrentThreadCoreAffinity(int idealCore, uint64 desiredCoreMask);

    // symbol: ?setCurrentThreadPriority@ThreadUtil@Threading@Bedrock@@SAXAEBVOSThreadPriority@23@@Z
    MCAPI static void setCurrentThreadPriority(class Bedrock::Threading::OSThreadPriority const& pri);

    // symbol: ?setThreadPriority@ThreadUtil@Threading@Bedrock@@SAXAEBQEAXAEBVOSThreadPriority@23@@Z
    MCAPI static void
    setThreadPriority(void* const& nativeHandle, class Bedrock::Threading::OSThreadPriority const& pri);

    // NOLINTEND
};

}; // namespace Bedrock::Threading
