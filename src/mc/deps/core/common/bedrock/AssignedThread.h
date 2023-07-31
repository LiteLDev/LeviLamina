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
    // NOLINTBEGIN
    /**
     * @symbol ?assign\@AssignedThread\@Threading\@Bedrock\@\@QEAAXAEBVid\@thread\@std\@\@\@Z
     */
    MCAPI void assign(std::thread::id const&);
    /**
     * @symbol ?isOnThread\@AssignedThread\@Threading\@Bedrock\@\@QEBA_NXZ
     */
    MCAPI bool isOnThread() const;
    /**
     * @symbol ??8AssignedThread\@Threading\@Bedrock\@\@QEBA_NAEBVid\@thread\@std\@\@\@Z
     */
    MCAPI bool operator==(std::thread::id const&) const;
    // NOLINTEND
};

}; // namespace Bedrock::Threading
