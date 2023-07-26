#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpKeyValueData {

public:
    // prevent constructor by default
    CrashDumpKeyValueData& operator=(CrashDumpKeyValueData const&) = delete;
    CrashDumpKeyValueData(CrashDumpKeyValueData const&)            = delete;
    CrashDumpKeyValueData()                                        = delete;

public:
    /**
     * @symbol ??0CrashDumpKeyValueData\@\@QEAA\@W4CrashDumpLogStringID\@\@0H_K\@Z
     */
    MCAPI CrashDumpKeyValueData(
        enum class CrashDumpLogStringID,
        enum class CrashDumpLogStringID,
        int,
        unsigned __int64
    ); // NOLINT
    /**
     * @symbol ?kFormat\@CrashDumpKeyValueData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[]; // NOLINT
};
