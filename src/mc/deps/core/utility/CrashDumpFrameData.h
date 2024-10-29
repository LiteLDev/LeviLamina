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
    MCAPI CrashDumpFrameData(int, int, uint64, float, float, float, float);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(int, int, uint64, float, float, float, float);

    MCAPI static auto kFormat() -> struct CrashDumpFormatEntryImpl const (&)[];

    // NOLINTEND
};
