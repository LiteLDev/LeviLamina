#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/diagnostics/CrashDumpLogBlobHeader.h"

struct CrashDumpPlayerDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 256> mUnk69c1ae;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpPlayerDataArray& operator=(CrashDumpPlayerDataArray const&);
    CrashDumpPlayerDataArray(CrashDumpPlayerDataArray const&);
    CrashDumpPlayerDataArray();
};
