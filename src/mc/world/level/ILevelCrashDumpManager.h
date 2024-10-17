#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ILevelCrashDumpManager {
public:
    // prevent constructor by default
    ILevelCrashDumpManager& operator=(ILevelCrashDumpManager const&);
    ILevelCrashDumpManager(ILevelCrashDumpManager const&);
    ILevelCrashDumpManager();
};
