#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpAssertData {

public:
    // prevent constructor by default
    CrashDumpAssertData& operator=(CrashDumpAssertData const&) = delete;
    CrashDumpAssertData(CrashDumpAssertData const&)            = delete;
    CrashDumpAssertData()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?kFormat\@CrashDumpAssertData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];
    // NOLINTEND
};
