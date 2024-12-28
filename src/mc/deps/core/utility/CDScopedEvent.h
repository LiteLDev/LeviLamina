#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

struct CDScopedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk8d1227;
    ::ll::UntypedStorage<2, 2> mUnk74c789;
    // NOLINTEND

public:
    // prevent constructor by default
    CDScopedEvent& operator=(CDScopedEvent const&);
    CDScopedEvent(CDScopedEvent const&);
    CDScopedEvent();

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
