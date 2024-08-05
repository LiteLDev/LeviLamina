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
    MCAPI CDScopedEvent(::CrashDumpLogStringID, ::CrashDumpLogStringID, ::CrashDumpLogStringID);

    MCAPI ~CDScopedEvent();

    // NOLINTEND
};
