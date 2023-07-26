#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class AssignedThread {

public:
    // prevent constructor by default
    AssignedThread& operator=(AssignedThread const&) = delete;
    AssignedThread(AssignedThread const&)            = delete;
    AssignedThread()                                 = delete;

public:
    /**
     * @symbol ?assign\@AssignedThread\@Threading\@Bedrock\@\@QEAAXAEBVid\@thread\@std\@\@\@Z
     */
    MCAPI void assign(class std::thread::id const&); // NOLINT
    /**
     * @symbol ?isOnThread\@AssignedThread\@Threading\@Bedrock\@\@QEBA_NXZ
     */
    MCAPI bool isOnThread() const; // NOLINT
    /**
     * @symbol ??8AssignedThread\@Threading\@Bedrock\@\@QEBA_NAEBVid\@thread\@std\@\@\@Z
     */
    MCAPI bool operator==(class std::thread::id const&) const; // NOLINT
};

}; // namespace Bedrock::Threading
