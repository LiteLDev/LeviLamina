#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpEventData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPEVENTDATA
public:
    CrashDumpEventData& operator=(CrashDumpEventData const&) = delete;
    CrashDumpEventData(CrashDumpEventData const&)            = delete;
    CrashDumpEventData()                                     = delete;
#endif

public:
    /**
     * @symbol ??0CrashDumpEventData\@\@QEAA\@W4CrashDumpLogStringID\@\@0\@Z
     */
    MCAPI CrashDumpEventData(enum class CrashDumpLogStringID, enum class CrashDumpLogStringID);
    /**
     * @symbol ?kFormat\@CrashDumpEventData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];
};
