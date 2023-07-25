#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpKeyValueData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPKEYVALUEDATA
public:
    CrashDumpKeyValueData& operator=(CrashDumpKeyValueData const&) = delete;
    CrashDumpKeyValueData(CrashDumpKeyValueData const&)            = delete;
    CrashDumpKeyValueData()                                        = delete;
#endif

public:
    /**
     * @symbol ??0CrashDumpKeyValueData\@\@QEAA\@W4CrashDumpLogStringID\@\@0H_K\@Z
     */
    MCAPI
    CrashDumpKeyValueData(enum class CrashDumpLogStringID, enum class CrashDumpLogStringID, int, unsigned __int64);
    /**
     * @symbol ?kFormat\@CrashDumpKeyValueData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];
};
