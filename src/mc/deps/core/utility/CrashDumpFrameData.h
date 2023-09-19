#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpFrameData {
public:
    // prevent constructor by default
    CrashDumpFrameData& operator=(CrashDumpFrameData const&);
    CrashDumpFrameData(CrashDumpFrameData const&);
    CrashDumpFrameData();

public:
    // NOLINTBEGIN
    // symbol: ??0CrashDumpFrameData@@QEAA@HH_KMMMM@Z
    MCAPI CrashDumpFrameData(int, int, uint64, float, float, float, float);

    // symbol: ?kFormat@CrashDumpFrameData@@2QBUCrashDumpFormatEntryImpl@@B
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

    // NOLINTEND
};
