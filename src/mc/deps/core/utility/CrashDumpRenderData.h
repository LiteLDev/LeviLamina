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
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static auto kFormat() -> struct CrashDumpFormatEntryImpl const (&)[];

    // NOLINTEND
};
