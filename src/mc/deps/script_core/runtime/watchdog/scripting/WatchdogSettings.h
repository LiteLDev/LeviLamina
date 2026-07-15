#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct WatchdogSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                  mHangThresholdMs;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mSpikeThresholdMs;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mSlowThresholdMs;
    ::ll::TypedStorage<1, 1, bool>                 mHangException;
    ::ll::TypedStorage<1, 1, bool>                 mEnableExceptionHandling;
    ::ll::TypedStorage<1, 1, bool>                 mEnableShutdown;
    ::ll::TypedStorage<4, 4, int>                  mMemoryWarningMB;
    ::ll::TypedStorage<4, 4, int>                  mMemoryLimitMB;
    // NOLINTEND
};

} // namespace Scripting
