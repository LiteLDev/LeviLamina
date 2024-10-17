#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpPlayerData {
public:
    // prevent constructor by default
    CrashDumpPlayerData& operator=(CrashDumpPlayerData const&);
    CrashDumpPlayerData(CrashDumpPlayerData const&);
    CrashDumpPlayerData();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static ::ll::CArrayT<struct CrashDumpFormatEntryImpl const>& kFormat();

    // NOLINTEND
};
