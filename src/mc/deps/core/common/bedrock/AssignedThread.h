#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class AssignedThread {
public:
    // prevent constructor by default
    AssignedThread& operator=(AssignedThread const&);
    AssignedThread(AssignedThread const&);
    AssignedThread();

public:
    // NOLINTBEGIN
    // symbol: ?assign@AssignedThread@Threading@Bedrock@@QEAAXAEBVid@thread@std@@@Z
    MCAPI void assign(std::thread::id const& thread);

    // symbol: ?isOnThread@AssignedThread@Threading@Bedrock@@QEBA_NXZ
    MCAPI bool isOnThread() const;

    // symbol: ??8AssignedThread@Threading@Bedrock@@QEBA_NAEBVid@thread@std@@@Z
    MCAPI bool operator==(std::thread::id const& id) const;

    // NOLINTEND
};

}; // namespace Bedrock::Threading
