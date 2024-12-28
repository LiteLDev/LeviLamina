#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpPlayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 64> mUnk59f85e;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpPlayerData& operator=(CrashDumpPlayerData const&);
    CrashDumpPlayerData(CrashDumpPlayerData const&);
    CrashDumpPlayerData();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[]> kFormat();
    // NOLINTEND
};
