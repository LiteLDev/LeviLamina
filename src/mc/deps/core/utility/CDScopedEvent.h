#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CrashDumpLogStringID.h"

class CDScopedEvent {
public:
    // prevent constructor by default
    CDScopedEvent& operator=(CDScopedEvent const&);
    CDScopedEvent(CDScopedEvent const&);
    CDScopedEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0CDScopedEvent@@QEAA@W4CrashDumpLogStringID@@00@Z
    MCAPI CDScopedEvent(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID);

    // symbol: ??1CDScopedEvent@@QEAA@XZ
    MCAPI ~CDScopedEvent();

    // NOLINTEND
};
