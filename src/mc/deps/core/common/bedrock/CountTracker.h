#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class CountTracker {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_COUNTTRACKER
public:
    CountTracker& operator=(CountTracker const&) = delete;
    CountTracker(CountTracker const&)            = delete;
#endif

public:
    /**
     * @symbol ??0CountTracker\@Threading\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI CountTracker();
    /**
     * @symbol ?acquire\@CountTracker\@Threading\@Bedrock\@\@QEAA?AV?$shared_ptr\@PEAX\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<void*> acquire();
    /**
     * @symbol ?clear\@CountTracker\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol ?get\@CountTracker\@Threading\@Bedrock\@\@QEBAIXZ
     */
    MCAPI unsigned int get() const;
    /**
     * @symbol ??1CountTracker\@Threading\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~CountTracker();
};

}; // namespace Bedrock::Threading
