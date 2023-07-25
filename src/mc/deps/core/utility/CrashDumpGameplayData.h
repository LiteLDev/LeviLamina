#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpGameplayData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPGAMEPLAYDATA
public:
    CrashDumpGameplayData& operator=(CrashDumpGameplayData const&) = delete;
    CrashDumpGameplayData(CrashDumpGameplayData const&)            = delete;
    CrashDumpGameplayData()                                        = delete;
#endif

public:
    /**
     * @symbol ?kFormat\@CrashDumpGameplayData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];
};
