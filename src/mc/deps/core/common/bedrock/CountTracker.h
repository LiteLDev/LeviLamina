#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class CountTracker {

public:
    // prevent constructor by default
    CountTracker& operator=(CountTracker const&) = delete;
    CountTracker(CountTracker const&)            = delete;

public:
    /**
     * @symbol ??0CountTracker\@Threading\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI CountTracker(); // NOLINT
    /**
     * @symbol ?acquire\@CountTracker\@Threading\@Bedrock\@\@QEAA?AV?$shared_ptr\@PEAX\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<void*> acquire(); // NOLINT
    /**
     * @symbol ?clear\@CountTracker\@Threading\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void clear(); // NOLINT
    /**
     * @symbol ?get\@CountTracker\@Threading\@Bedrock\@\@QEBAIXZ
     */
    MCAPI unsigned int get() const; // NOLINT
    /**
     * @symbol ??1CountTracker\@Threading\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~CountTracker(); // NOLINT
};

}; // namespace Bedrock::Threading
