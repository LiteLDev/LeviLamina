#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 64> mUnk59f85e;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpPlayerData& operator=(CrashDumpPlayerData const&);
    CrashDumpPlayerData(CrashDumpPlayerData const&);
    CrashDumpPlayerData();
};
