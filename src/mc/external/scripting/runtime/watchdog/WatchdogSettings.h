#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct WatchdogSettings {
    int  mHangThresholdMs;
    int  mSpikeThresholdMs;
    int  mSlowThresholdMs;
    bool mHangException;
    bool mEnableExceptionHandling;
    bool mEnableShutdown;
    int  mMemoryWarningMB;
    int  mMemoryLimitMB;
};

}; // namespace Scripting
