#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CrashDumpLogStringID.h"

struct CrashDumpEventData {
public:
    // prevent constructor by default
    CrashDumpEventData& operator=(CrashDumpEventData const&);
    CrashDumpEventData(CrashDumpEventData const&);
    CrashDumpEventData();

public:
    // NOLINTBEGIN
    MCAPI CrashDumpEventData(::CrashDumpLogStringID, ::CrashDumpLogStringID);

    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

    // NOLINTEND
};
