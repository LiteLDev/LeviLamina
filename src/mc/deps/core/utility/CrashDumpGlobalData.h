#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpGlobalData {
public:
    // prevent constructor by default
    CrashDumpGlobalData& operator=(CrashDumpGlobalData const&);
    CrashDumpGlobalData(CrashDumpGlobalData const&);
    CrashDumpGlobalData();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static ::ll::CArrayT<struct CrashDumpFormatEntryImpl const>& kFormat();

    // NOLINTEND
};
