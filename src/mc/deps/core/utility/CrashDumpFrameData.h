#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpFrameData {

public:
    // prevent constructor by default
    CrashDumpFrameData& operator=(CrashDumpFrameData const&) = delete;
    CrashDumpFrameData(CrashDumpFrameData const&)            = delete;
    CrashDumpFrameData()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CrashDumpFrameData\@\@QEAA\@HH_KMMMM\@Z
     */
    MCAPI CrashDumpFrameData(int, int, uint64_t, float, float, float, float);
    /**
     * @symbol ?kFormat\@CrashDumpFrameData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];
    // NOLINTEND
};
