#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpGlobalData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPGLOBALDATA
public:
    CrashDumpGlobalData& operator=(CrashDumpGlobalData const&) = delete;
    CrashDumpGlobalData(CrashDumpGlobalData const&)            = delete;
    CrashDumpGlobalData()                                      = delete;
#endif

public:
    /**
     * @symbol ?kFormat\@CrashDumpGlobalData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];
};
