#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpLogUtils {

public:
    // prevent constructor by default
    CrashDumpLogUtils& operator=(CrashDumpLogUtils const&) = delete;
    CrashDumpLogUtils(CrashDumpLogUtils const&)            = delete;
    CrashDumpLogUtils()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?getTagFromOptions\@CrashDumpLogUtils\@\@SA?AW4CrashDumpLogStringID\@\@_KV?$span\@$$CBW4CrashDumpLogStringID\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI static enum class CrashDumpLogStringID
        getTagFromOptions(uint64_t, class gsl::span<enum class CrashDumpLogStringID const>);
    // NOLINTEND
};
