#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

struct CrashDumpLogUtils {
public:
    // prevent constructor by default
    CrashDumpLogUtils& operator=(CrashDumpLogUtils const&);
    CrashDumpLogUtils(CrashDumpLogUtils const&);
    CrashDumpLogUtils();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::CrashDumpLogStringID
    getTagFromOptions(uint64 choice, ::gsl::span<::CrashDumpLogStringID const> options);
    // NOLINTEND
};
