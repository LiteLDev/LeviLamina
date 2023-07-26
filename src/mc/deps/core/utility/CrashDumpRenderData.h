#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpRenderData {

public:
    // prevent constructor by default
    CrashDumpRenderData& operator=(CrashDumpRenderData const&) = delete;
    CrashDumpRenderData(CrashDumpRenderData const&)            = delete;
    CrashDumpRenderData()                                      = delete;

public:
    /**
     * @symbol ?kFormat\@CrashDumpRenderData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[]; // NOLINT
};
