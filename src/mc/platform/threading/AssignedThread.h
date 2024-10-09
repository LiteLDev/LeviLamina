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
    MCAPI void assign(std::thread::id const&);

    MCAPI bool isOnThread() const;

    MCAPI bool operator==(std::thread::id const&) const;

    // NOLINTEND
};

}; // namespace Bedrock::Threading
