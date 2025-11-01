#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpLogFieldFormat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mUnkf4b19b;
    ::ll::UntypedStorage<4, 4> mUnka73ee0;
    ::ll::UntypedStorage<4, 4> mUnkae313d;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpLogFieldFormat& operator=(CrashDumpLogFieldFormat const&);
    CrashDumpLogFieldFormat(CrashDumpLogFieldFormat const&);
    CrashDumpLogFieldFormat();

};
