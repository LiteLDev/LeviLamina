#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpKeyValueData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk8f2373;
    ::ll::UntypedStorage<2, 2> mUnkd42acf;
    ::ll::UntypedStorage<4, 4> mUnkf48232;
    ::ll::UntypedStorage<8, 8> mUnk280e33;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpKeyValueData& operator=(CrashDumpKeyValueData const&);
    CrashDumpKeyValueData(CrashDumpKeyValueData const&);
    CrashDumpKeyValueData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CrashDumpKeyValueData(::CrashDumpLogStringID tag0, ::CrashDumpLogStringID tag1, int value0, uint64 value1);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[]> kFormat();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CrashDumpLogStringID tag0, ::CrashDumpLogStringID tag1, int value0, uint64 value1);
    // NOLINTEND
};
