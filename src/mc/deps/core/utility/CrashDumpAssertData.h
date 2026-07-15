#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpAssertData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 128> mUnkdb1380;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpAssertData& operator=(CrashDumpAssertData const&);
    CrashDumpAssertData(CrashDumpAssertData const&);
    CrashDumpAssertData();
};
