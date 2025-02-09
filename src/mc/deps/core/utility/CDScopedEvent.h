#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

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
    MCAPI CDScopedEvent(::CrashDumpLogStringID tag, ::CrashDumpLogStringID tagStart, ::CrashDumpLogStringID tagEnd);

    MCAPI ~CDScopedEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CrashDumpLogStringID tag, ::CrashDumpLogStringID tagStart, ::CrashDumpLogStringID tagEnd);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
