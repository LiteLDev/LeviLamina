#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpGlobalData {
public:
    // prevent constructor by default
    CrashDumpGlobalData& operator=(CrashDumpGlobalData const&);
    CrashDumpGlobalData(CrashDumpGlobalData const&);
    CrashDumpGlobalData();

public:
    // NOLINTBEGIN
    // symbol: ?kFormat@CrashDumpGlobalData@@2QBUCrashDumpFormatEntryImpl@@B
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

    // NOLINTEND
};
