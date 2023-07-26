#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpFormatEntryImpl {

public:
    // prevent constructor by default
    CrashDumpFormatEntryImpl& operator=(CrashDumpFormatEntryImpl const&) = delete;
    CrashDumpFormatEntryImpl(CrashDumpFormatEntryImpl const&)            = delete;
    CrashDumpFormatEntryImpl()                                           = delete;
};
