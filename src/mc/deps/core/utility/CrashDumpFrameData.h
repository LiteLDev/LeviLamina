#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpFrameData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPFRAMEDATA
public:
    CrashDumpFrameData& operator=(CrashDumpFrameData const&) = delete;
    CrashDumpFrameData(CrashDumpFrameData const&)            = delete;
    CrashDumpFrameData()                                     = delete;
#endif

public:
    /**
     * @symbol ??0CrashDumpFrameData\@\@QEAA\@HH_KMMMM\@Z
     */
    MCAPI CrashDumpFrameData(int, int, unsigned __int64, float, float, float, float);
    /**
     * @symbol ?kFormat\@CrashDumpFrameData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];
};
