#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpAssertData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 128> mUnkdb1380;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpAssertData& operator=(CrashDumpAssertData const&);
    CrashDumpAssertData(CrashDumpAssertData const&);
    CrashDumpAssertData();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[]> kFormat();
    // NOLINTEND
};
