#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpKeyValueData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk8f2373;
    ::ll::UntypedStorage<2, 2> mUnkd42acf;
    ::ll::UntypedStorage<4, 4> mUnkf48232;
    ::ll::UntypedStorage<8, 8> mUnk280e33;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpKeyValueData& operator=(CrashDumpKeyValueData const&);
    CrashDumpKeyValueData(CrashDumpKeyValueData const&);
    CrashDumpKeyValueData();
};
