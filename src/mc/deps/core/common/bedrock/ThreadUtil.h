#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class OSThreadPriority; }
// clang-format on

namespace Bedrock::Threading {

class ThreadUtil {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_THREADUTIL
public:
    ThreadUtil& operator=(ThreadUtil const&) = delete;
    ThreadUtil(ThreadUtil const&)            = delete;
    ThreadUtil()                             = delete;
#endif

public:
    /**
     * @symbol ?setCoreAffinity\@ThreadUtil\@Threading\@Bedrock\@\@SAXAEBQEAXH_K\@Z
     */
    MCAPI static void setCoreAffinity(void* const&, int, unsigned __int64);
    /**
     * @symbol ?setCurrentThreadCoreAffinity\@ThreadUtil\@Threading\@Bedrock\@\@SAXH_K\@Z
     */
    MCAPI static void setCurrentThreadCoreAffinity(int, unsigned __int64);
    /**
     * @symbol ?setCurrentThreadPriority\@ThreadUtil\@Threading\@Bedrock\@\@SAXAEBVOSThreadPriority\@23\@\@Z
     */
    MCAPI static void setCurrentThreadPriority(class Bedrock::Threading::OSThreadPriority const&);
    /**
     * @symbol ?setThreadPriority\@ThreadUtil\@Threading\@Bedrock\@\@SAXAEBQEAXAEBVOSThreadPriority\@23\@\@Z
     */
    MCAPI static void setThreadPriority(void* const&, class Bedrock::Threading::OSThreadPriority const&);
};

}; // namespace Bedrock::Threading
