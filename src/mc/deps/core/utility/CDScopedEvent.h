#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/diagnostics/CrashDumpLogStringID.h"

struct CDScopedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTag;
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTagEnd;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CDScopedEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor(::CrashDumpLogStringID tag, ::CrashDumpLogStringID tagStart, ::CrashDumpLogStringID tagEnd);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
