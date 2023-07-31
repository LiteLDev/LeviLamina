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
    ThreadUtil& operator=(ThreadUtil const&) = delete;
    ThreadUtil(ThreadUtil const&)            = delete;
    ThreadUtil()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?setCoreAffinity\@ThreadUtil\@Threading\@Bedrock\@\@SAXAEBQEAXH_K\@Z
     */
    MCAPI static void setCoreAffinity(void* const&, int, uint64_t);
    /**
     * @symbol ?setCurrentThreadCoreAffinity\@ThreadUtil\@Threading\@Bedrock\@\@SAXH_K\@Z
     */
    MCAPI static void setCurrentThreadCoreAffinity(int, uint64_t);
    /**
     * @symbol ?setCurrentThreadPriority\@ThreadUtil\@Threading\@Bedrock\@\@SAXAEBVOSThreadPriority\@23\@\@Z
     */
    MCAPI static void setCurrentThreadPriority(class Bedrock::Threading::OSThreadPriority const&);
    /**
     * @symbol ?setThreadPriority\@ThreadUtil\@Threading\@Bedrock\@\@SAXAEBQEAXAEBVOSThreadPriority\@23\@\@Z
     */
    MCAPI static void setThreadPriority(void* const&, class Bedrock::Threading::OSThreadPriority const&);
    // NOLINTEND
};

}; // namespace Bedrock::Threading
