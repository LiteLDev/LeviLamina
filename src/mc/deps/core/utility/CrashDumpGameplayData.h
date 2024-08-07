#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpGameplayData {
public:
    // prevent constructor by default
    CrashDumpGameplayData& operator=(CrashDumpGameplayData const&);
    CrashDumpGameplayData(CrashDumpGameplayData const&);
    CrashDumpGameplayData();

public:
    // NOLINTBEGIN
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

    // NOLINTEND
};
