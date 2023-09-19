#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class CountTracker {
public:
    // prevent constructor by default
    CountTracker& operator=(CountTracker const&);
    CountTracker(CountTracker const&);

public:
    // NOLINTBEGIN
    // symbol: ??0CountTracker@Threading@Bedrock@@QEAA@XZ
    MCAPI CountTracker();

    // symbol: ?acquire@CountTracker@Threading@Bedrock@@QEAA?AV?$shared_ptr@PEAX@std@@XZ
    MCAPI std::shared_ptr<void*> acquire();

    // symbol: ?clear@CountTracker@Threading@Bedrock@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?get@CountTracker@Threading@Bedrock@@QEBAIXZ
    MCAPI uint get() const;

    // symbol: ??1CountTracker@Threading@Bedrock@@QEAA@XZ
    MCAPI ~CountTracker();

    // NOLINTEND
};

}; // namespace Bedrock::Threading
