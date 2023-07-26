#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpEventData {

public:
    // prevent constructor by default
    CrashDumpEventData& operator=(CrashDumpEventData const&) = delete;
    CrashDumpEventData(CrashDumpEventData const&)            = delete;
    CrashDumpEventData()                                     = delete;

public:
    /**
     * @symbol ??0CrashDumpEventData\@\@QEAA\@W4CrashDumpLogStringID\@\@0\@Z
     */
    MCAPI CrashDumpEventData(enum class CrashDumpLogStringID, enum class CrashDumpLogStringID); // NOLINT
    /**
     * @symbol ?kFormat\@CrashDumpEventData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[]; // NOLINT
};
