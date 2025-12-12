#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/diagnostics/CrashDumpLogBlobHeader.h"

struct CrashDumpRenderDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 1024> mUnk968c89;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpRenderDataArray& operator=(CrashDumpRenderDataArray const&);
    CrashDumpRenderDataArray(CrashDumpRenderDataArray const&);
    CrashDumpRenderDataArray();
};
