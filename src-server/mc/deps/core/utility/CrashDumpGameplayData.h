#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpGameplayData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk3c8d03;
    ::ll::UntypedStorage<2, 2> mUnk656645;
    ::ll::UntypedStorage<4, 4> mUnk73f8c0;
    ::ll::UntypedStorage<4, 4> mUnkbc40f6;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpGameplayData& operator=(CrashDumpGameplayData const&);
    CrashDumpGameplayData(CrashDumpGameplayData const&);
    CrashDumpGameplayData();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[]> kFormat();
    // NOLINTEND

};
