#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

namespace cg {

struct GroupPoolDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WorkerPool&> mPool;
    ::ll::TypedStorage<8, 8, ::Scheduler&>  mScheduler;
    ::ll::TypedStorage<1, 1, bool>          mIsHelper;
    // NOLINTEND

public:
    // prevent constructor by default
    GroupPoolDescription& operator=(GroupPoolDescription const&);
    GroupPoolDescription(GroupPoolDescription const&);
    GroupPoolDescription();
};

} // namespace cg
