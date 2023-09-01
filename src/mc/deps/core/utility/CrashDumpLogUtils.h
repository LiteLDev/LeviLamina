#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CrashDumpLogStringID.h"

class CrashDumpLogUtils {
public:
    // prevent constructor by default
    CrashDumpLogUtils& operator=(CrashDumpLogUtils const&) = delete;
    CrashDumpLogUtils(CrashDumpLogUtils const&)            = delete;
    CrashDumpLogUtils()                                    = delete;

public:
    // NOLINTBEGIN
    // symbol:
    // ?getTagFromOptions@CrashDumpLogUtils@@SA?AW4CrashDumpLogStringID@@_KV?$span@$$CBW4CrashDumpLogStringID@@$0?0@gsl@@@Z
    MCAPI static ::CrashDumpLogStringID getTagFromOptions(uint64, gsl::span<::CrashDumpLogStringID const>);

    // NOLINTEND
};
