#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

struct CrashDumpKeyValueData {
public:
    // prevent constructor by default
    CrashDumpKeyValueData& operator=(CrashDumpKeyValueData const&);
    CrashDumpKeyValueData(CrashDumpKeyValueData const&);
    CrashDumpKeyValueData();

public:
    // NOLINTBEGIN
    MCAPI CrashDumpKeyValueData(::CrashDumpLogStringID, ::CrashDumpLogStringID, int, uint64);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(::CrashDumpLogStringID, ::CrashDumpLogStringID, int, uint64);

    MCAPI static auto kFormat() -> struct CrashDumpFormatEntryImpl const (&)[];

    // NOLINTEND
};
