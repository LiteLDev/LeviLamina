#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpEventData.h"
#include "mc/platform/diagnostics/CrashDumpLogBlobHeader.h"

struct CrashDumpEventDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 49152, ::CrashDumpEventData[4096]> mEventData;
    // NOLINTEND
};
