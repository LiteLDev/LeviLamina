#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpFrameData {

public:
    // prevent constructor by default
    CrashDumpFrameData& operator=(CrashDumpFrameData const&) = delete;
    CrashDumpFrameData(CrashDumpFrameData const&)            = delete;
    CrashDumpFrameData()                                     = delete;

public:
    /**
     * @symbol ??0CrashDumpFrameData\@\@QEAA\@HH_KMMMM\@Z
     */
    MCAPI CrashDumpFrameData(int, int, unsigned __int64, float, float, float, float); // NOLINT
    /**
     * @symbol ?kFormat\@CrashDumpFrameData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[]; // NOLINT
};
