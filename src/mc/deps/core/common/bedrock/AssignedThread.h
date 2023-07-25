#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class AssignedThread {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_ASSIGNEDTHREAD
public:
    AssignedThread& operator=(AssignedThread const&) = delete;
    AssignedThread(AssignedThread const&)            = delete;
    AssignedThread()                                 = delete;
#endif

public:
    /**
     * @symbol ?assign\@AssignedThread\@Threading\@Bedrock\@\@QEAAXAEBVid\@thread\@std\@\@\@Z
     */
    MCAPI void assign(class std::thread::id const&);
    /**
     * @symbol ?isOnThread\@AssignedThread\@Threading\@Bedrock\@\@QEBA_NXZ
     */
    MCAPI bool isOnThread() const;
    /**
     * @symbol ??8AssignedThread\@Threading\@Bedrock\@\@QEBA_NAEBVid\@thread\@std\@\@\@Z
     */
    MCAPI bool operator==(class std::thread::id const&) const;
};

}; // namespace Bedrock::Threading
