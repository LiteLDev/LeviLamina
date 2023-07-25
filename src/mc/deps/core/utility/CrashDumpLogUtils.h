#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpLogUtils {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPLOGUTILS
public:
    CrashDumpLogUtils& operator=(CrashDumpLogUtils const&) = delete;
    CrashDumpLogUtils(CrashDumpLogUtils const&)            = delete;
    CrashDumpLogUtils()                                    = delete;
#endif

public:
    /**
     * @symbol
     * ?getTagFromOptions\@CrashDumpLogUtils\@\@SA?AW4CrashDumpLogStringID\@\@_KV?$span\@$$CBW4CrashDumpLogStringID\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI static enum class CrashDumpLogStringID
    getTagFromOptions(unsigned __int64, class gsl::span<enum class CrashDumpLogStringID const, -1>);
};
