#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke8fa56;
    ::ll::UntypedStorage<4, 4> mUnkde3bdb;
    ::ll::UntypedStorage<4, 4> mUnk1e219d;
    ::ll::UntypedStorage<4, 4> mUnk1ea33a;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpLogBlobHeader& operator=(CrashDumpLogBlobHeader const&);
    CrashDumpLogBlobHeader(CrashDumpLogBlobHeader const&);
    CrashDumpLogBlobHeader();

};
