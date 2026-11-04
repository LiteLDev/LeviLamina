#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathView.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

struct ResourceLoadManagerOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scheduler*>                       mScheduler;
    ::ll::TypedStorage<8, 8, ::WorkerPool*>                      mWorkerPool;
    ::ll::TypedStorage<8, 24, ::std::optional<::Core::PathView>> mLoggingPath;
    ::ll::TypedStorage<1, 1, bool>                               mRegisterClientResourceGroups;
    // NOLINTEND
};
