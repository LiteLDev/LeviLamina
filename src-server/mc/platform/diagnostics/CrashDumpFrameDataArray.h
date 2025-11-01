#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/diagnostics/CrashDumpLogBlobHeader.h"

struct CrashDumpFrameDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 256> mUnke28012;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpFrameDataArray& operator=(CrashDumpFrameDataArray const&);
    CrashDumpFrameDataArray(CrashDumpFrameDataArray const&);
    CrashDumpFrameDataArray();

};
