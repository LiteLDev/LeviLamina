#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GlobalResourcesCrashRecovery {
public:
    // prevent constructor by default
    GlobalResourcesCrashRecovery& operator=(GlobalResourcesCrashRecovery const&);
    GlobalResourcesCrashRecovery(GlobalResourcesCrashRecovery const&);
    GlobalResourcesCrashRecovery();
};
