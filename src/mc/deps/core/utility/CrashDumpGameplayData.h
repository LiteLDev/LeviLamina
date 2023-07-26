#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpGameplayData {

public:
    // prevent constructor by default
    CrashDumpGameplayData& operator=(CrashDumpGameplayData const&) = delete;
    CrashDumpGameplayData(CrashDumpGameplayData const&)            = delete;
    CrashDumpGameplayData()                                        = delete;

public:
    /**
     * @symbol ?kFormat\@CrashDumpGameplayData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[]; // NOLINT
};
