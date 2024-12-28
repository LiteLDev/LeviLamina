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
    ::ll::UntypedStorage<2, 2> mUnkc803f7;
    ::ll::UntypedStorage<2, 2> mUnk5ca1e7;
    ::ll::UntypedStorage<4, 4> mUnk3d283d;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpEventData& operator=(CrashDumpEventData const&);
    CrashDumpEventData(CrashDumpEventData const&);
    CrashDumpEventData();

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
