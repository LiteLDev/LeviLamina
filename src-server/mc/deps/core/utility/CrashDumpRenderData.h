#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk779e78;
    ::ll::UntypedStorage<2, 2> mUnka0b5de;
    ::ll::UntypedStorage<4, 4> mUnk43e0af;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpRenderData& operator=(CrashDumpRenderData const&);
    CrashDumpRenderData(CrashDumpRenderData const&);
    CrashDumpRenderData();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[]> kFormat();
    // NOLINTEND

};
