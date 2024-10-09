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
    MCAPI static void setCoreAffinity(void* const& nativeHandle, int idealCore, uint64 desiredCoreMask);

    MCAPI static void setCurrentThreadCoreAffinity(int idealCore, uint64 desiredCoreMask);

    MCAPI static void setCurrentThreadPriority(class Bedrock::Threading::OSThreadPriority const& pri);

    MCAPI static void
    setThreadPriority(void* const& nativeHandle, class Bedrock::Threading::OSThreadPriority const& pri);

    // NOLINTEND
};

}; // namespace Bedrock::Threading
