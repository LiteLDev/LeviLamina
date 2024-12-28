#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"

struct CrashDumpFirstAssertsDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 384> mUnk439f05;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpFirstAssertsDataArray& operator=(CrashDumpFirstAssertsDataArray const&);
    CrashDumpFirstAssertsDataArray(CrashDumpFirstAssertsDataArray const&);
    CrashDumpFirstAssertsDataArray();
};
