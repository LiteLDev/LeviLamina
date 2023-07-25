#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDump_AllData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMP_ALLDATA
public:
    CrashDump_AllData& operator=(CrashDump_AllData const&) = delete;
    CrashDump_AllData(CrashDump_AllData const&)            = delete;
#endif

public:
    /**
     * @symbol ??0CrashDump_AllData\@\@QEAA\@XZ
     */
    MCAPI CrashDump_AllData();
};
