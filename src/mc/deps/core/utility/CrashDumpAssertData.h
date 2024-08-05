#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpAssertData {
public:
    // prevent constructor by default
    CrashDumpAssertData& operator=(CrashDumpAssertData const&);
    CrashDumpAssertData(CrashDumpAssertData const&);
    CrashDumpAssertData();

public:
    // NOLINTBEGIN
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

    // NOLINTEND
};
