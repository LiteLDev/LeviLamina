#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class OSThreadPriority {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_OSTHREADPRIORITY
public:
    OSThreadPriority& operator=(OSThreadPriority const&) = delete;
    OSThreadPriority(OSThreadPriority const&)            = delete;
    OSThreadPriority()                                   = delete;
#endif

public:
    /**
     * @symbol ?Elevated\@OSThreadPriority\@Threading\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Threading::OSThreadPriority const Elevated;
    /**
     * @symbol ?High\@OSThreadPriority\@Threading\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Threading::OSThreadPriority const High;
    /**
     * @symbol ?Low\@OSThreadPriority\@Threading\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Threading::OSThreadPriority const Low;
    /**
     * @symbol ?Normal\@OSThreadPriority\@Threading\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Threading::OSThreadPriority const Normal;
};

}; // namespace Bedrock::Threading
