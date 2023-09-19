#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpFormatEntryImpl {
public:
    // prevent constructor by default
    CrashDumpFormatEntryImpl& operator=(CrashDumpFormatEntryImpl const&);
    CrashDumpFormatEntryImpl(CrashDumpFormatEntryImpl const&);
    CrashDumpFormatEntryImpl();
};
