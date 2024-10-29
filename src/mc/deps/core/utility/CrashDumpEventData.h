#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

struct CrashDumpEventData {
public:
    // prevent constructor by default
    CrashDumpEventData& operator=(CrashDumpEventData const&);
    CrashDumpEventData(CrashDumpEventData const&);
    CrashDumpEventData();

public:
    // NOLINTBEGIN
    MCAPI CrashDumpEventData(::CrashDumpLogStringID, ::CrashDumpLogStringID);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(::CrashDumpLogStringID, ::CrashDumpLogStringID);

    MCAPI static auto kFormat() -> struct CrashDumpFormatEntryImpl const (&)[];

    // NOLINTEND
};
