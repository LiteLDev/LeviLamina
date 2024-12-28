#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"

struct CrashDumpEventDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32768> mUnk2cf47a;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpEventDataArray& operator=(CrashDumpEventDataArray const&);
    CrashDumpEventDataArray(CrashDumpEventDataArray const&);
    CrashDumpEventDataArray();
};
