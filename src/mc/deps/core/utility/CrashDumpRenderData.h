#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpRenderData {
public:
    // prevent constructor by default
    CrashDumpRenderData& operator=(CrashDumpRenderData const&);
    CrashDumpRenderData(CrashDumpRenderData const&);
    CrashDumpRenderData();

public:
    // NOLINTBEGIN
    // symbol: ?kFormat@CrashDumpRenderData@@2QBUCrashDumpFormatEntryImpl@@B
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

    // NOLINTEND
};
