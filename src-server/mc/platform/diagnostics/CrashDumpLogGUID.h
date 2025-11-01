#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpLogGUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk106ad5;
    ::ll::UntypedStorage<2, 2> mUnk45d02a;
    ::ll::UntypedStorage<2, 2> mUnk7f0180;
    ::ll::UntypedStorage<1, 8> mUnk20aa0b;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpLogGUID& operator=(CrashDumpLogGUID const&);
    CrashDumpLogGUID(CrashDumpLogGUID const&);
    CrashDumpLogGUID();
};
