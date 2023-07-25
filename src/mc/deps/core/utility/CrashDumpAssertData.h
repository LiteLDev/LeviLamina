#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpAssertData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPASSERTDATA
public:
    CrashDumpAssertData& operator=(CrashDumpAssertData const&) = delete;
    CrashDumpAssertData(CrashDumpAssertData const&)            = delete;
    CrashDumpAssertData()                                      = delete;
#endif

public:
    /**
     * @symbol ?kFormat\@CrashDumpAssertData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];
};
