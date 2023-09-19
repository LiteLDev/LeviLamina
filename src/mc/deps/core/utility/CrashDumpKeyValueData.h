#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CrashDumpLogStringID.h"

struct CrashDumpKeyValueData {
public:
    // prevent constructor by default
    CrashDumpKeyValueData& operator=(CrashDumpKeyValueData const&);
    CrashDumpKeyValueData(CrashDumpKeyValueData const&);
    CrashDumpKeyValueData();

public:
    // NOLINTBEGIN
    // symbol: ??0CrashDumpKeyValueData@@QEAA@W4CrashDumpLogStringID@@0H_K@Z
    MCAPI CrashDumpKeyValueData(::CrashDumpLogStringID, ::CrashDumpLogStringID, int, uint64);

    // symbol: ?kFormat@CrashDumpKeyValueData@@2QBUCrashDumpFormatEntryImpl@@B
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

    // NOLINTEND
};
