#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpKeyValueData {

public:
    // prevent constructor by default
    CrashDumpKeyValueData& operator=(CrashDumpKeyValueData const&) = delete;
    CrashDumpKeyValueData(CrashDumpKeyValueData const&)            = delete;
    CrashDumpKeyValueData()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CrashDumpKeyValueData\@\@QEAA\@W4CrashDumpLogStringID\@\@0H_K\@Z
     */
    MCAPI CrashDumpKeyValueData(enum class CrashDumpLogStringID, enum class CrashDumpLogStringID, int, uint64_t);
    /**
     * @symbol ?kFormat\@CrashDumpKeyValueData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];
    // NOLINTEND
};
