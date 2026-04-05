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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CDScopedEvent();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI CDScopedEvent(::CrashDumpLogStringID tag, ::CrashDumpLogStringID tagStart, ::CrashDumpLogStringID tagEnd);
#endif

    MCNAPI ~CDScopedEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::CrashDumpLogStringID tag, ::CrashDumpLogStringID tagStart, ::CrashDumpLogStringID tagEnd);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
