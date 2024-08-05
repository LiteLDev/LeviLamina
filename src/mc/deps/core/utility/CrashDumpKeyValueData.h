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
    MCAPI CrashDumpKeyValueData(::CrashDumpLogStringID, ::CrashDumpLogStringID, int, uint64);

    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

    // NOLINTEND
};
