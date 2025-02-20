#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogBlobHeader.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpEventData;
// clang-format on

struct CrashDumpEventDataArray : public ::CrashDumpLogBlobHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 49152, ::CrashDumpEventData[4096]> mEventData;
    // NOLINTEND
};
