#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpPlayerData {

public:
    // prevent constructor by default
    CrashDumpPlayerData& operator=(CrashDumpPlayerData const&) = delete;
    CrashDumpPlayerData(CrashDumpPlayerData const&)            = delete;
    CrashDumpPlayerData()                                      = delete;

public:
    /**
     * @symbol ?kFormat\@CrashDumpPlayerData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[]; // NOLINT
};
