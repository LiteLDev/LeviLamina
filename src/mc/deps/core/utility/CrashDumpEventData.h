#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

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
    // member functions
    // NOLINTBEGIN
    MCAPI CrashDumpEventData(::CrashDumpLogStringID tag0, ::CrashDumpLogStringID tag1);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[]> kFormat();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CrashDumpLogStringID tag0, ::CrashDumpLogStringID tag1);
    // NOLINTEND
};
