#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpPlayerData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPPLAYERDATA
public:
    CrashDumpPlayerData& operator=(CrashDumpPlayerData const&) = delete;
    CrashDumpPlayerData(CrashDumpPlayerData const&)            = delete;
    CrashDumpPlayerData()                                      = delete;
#endif

public:
    /**
     * @symbol ?kFormat\@CrashDumpPlayerData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];
};
