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
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static auto kFormat() -> struct CrashDumpFormatEntryImpl const (&)[];

    // NOLINTEND
};
