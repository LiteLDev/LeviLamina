#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/diagnostics/CrashDumpLogBlobHeader.h"

struct CrashDumpGameplayDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 1536> mUnk5e51ca;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpGameplayDataArray& operator=(CrashDumpGameplayDataArray const&);
    CrashDumpGameplayDataArray(CrashDumpGameplayDataArray const&);
    CrashDumpGameplayDataArray();
};
