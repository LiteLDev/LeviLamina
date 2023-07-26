#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class OSThreadPriority {

public:
    // prevent constructor by default
    OSThreadPriority& operator=(OSThreadPriority const&) = delete;
    OSThreadPriority(OSThreadPriority const&)            = delete;
    OSThreadPriority()                                   = delete;

public:
    /**
     * @symbol ?Elevated\@OSThreadPriority\@Threading\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Threading::OSThreadPriority const Elevated; // NOLINT
    /**
     * @symbol ?High\@OSThreadPriority\@Threading\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Threading::OSThreadPriority const High; // NOLINT
    /**
     * @symbol ?Low\@OSThreadPriority\@Threading\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Threading::OSThreadPriority const Low; // NOLINT
    /**
     * @symbol ?Normal\@OSThreadPriority\@Threading\@Bedrock\@\@2V123\@B
     */
    MCAPI static class Bedrock::Threading::OSThreadPriority const Normal; // NOLINT
};

}; // namespace Bedrock::Threading
