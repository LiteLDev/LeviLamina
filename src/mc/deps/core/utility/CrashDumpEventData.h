#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

struct CrashDumpEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTag0;
    ::ll::TypedStorage<2, 2, ::CrashDumpLogStringID> mTag1;
    ::ll::TypedStorage<4, 4, int>                    mEventThreadId;
    ::ll::TypedStorage<4, 4, uint>                   mTimeStamp;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpEventData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CrashDumpEventData(::CrashDumpLogStringID tag0, ::CrashDumpLogStringID tag1);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CrashDumpLogStringID tag0, ::CrashDumpLogStringID tag1);
    // NOLINTEND
};
