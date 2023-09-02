#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CrashDumpLogStringID.h"

struct CrashDumpEventData {
public:
    // prevent constructor by default
    CrashDumpEventData& operator=(CrashDumpEventData const&) = delete;
    CrashDumpEventData(CrashDumpEventData const&)            = delete;
    CrashDumpEventData()                                     = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0CrashDumpEventData@@QEAA@W4CrashDumpLogStringID@@0@Z
    MCAPI CrashDumpEventData(::CrashDumpLogStringID, ::CrashDumpLogStringID);

    // symbol: ?kFormat@CrashDumpEventData@@2QBUCrashDumpFormatEntryImpl@@B
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

    // NOLINTEND
};
