#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"

struct CrashDumpKeyValueDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8192> mUnk5e3f0c;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpKeyValueDataArray& operator=(CrashDumpKeyValueDataArray const&);
    CrashDumpKeyValueDataArray(CrashDumpKeyValueDataArray const&);
    CrashDumpKeyValueDataArray();
};
