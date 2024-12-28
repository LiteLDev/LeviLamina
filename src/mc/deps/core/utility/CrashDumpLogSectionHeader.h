#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpLogSectionHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16> mUnk966daa;
    ::ll::UntypedStorage<4, 4>  mUnk5e7841;
    ::ll::UntypedStorage<4, 4>  mUnk9d5d23;
    ::ll::UntypedStorage<4, 4>  mUnk6769f2;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpLogSectionHeader& operator=(CrashDumpLogSectionHeader const&);
    CrashDumpLogSectionHeader(CrashDumpLogSectionHeader const&);
    CrashDumpLogSectionHeader();
};
