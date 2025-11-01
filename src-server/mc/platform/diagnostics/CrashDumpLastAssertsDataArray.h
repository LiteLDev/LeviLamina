#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/diagnostics/CrashDumpLogBlobHeader.h"

struct CrashDumpLastAssertsDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 384> mUnk727f97;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpLastAssertsDataArray& operator=(CrashDumpLastAssertsDataArray const&);
    CrashDumpLastAssertsDataArray(CrashDumpLastAssertsDataArray const&);
    CrashDumpLastAssertsDataArray();

};
