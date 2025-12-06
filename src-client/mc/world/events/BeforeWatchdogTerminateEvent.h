#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/world/events/WatchdogTerminateReason.h"

struct BeforeWatchdogTerminateEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<4, 4, ::WatchdogTerminateReason>       mWatchdogTerminateReason;
    // NOLINTEND
};
