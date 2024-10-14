#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpFrameData {
public:
    // prevent constructor by default
    CrashDumpFrameData& operator=(CrashDumpFrameData const&);
    CrashDumpFrameData(CrashDumpFrameData const&);
    CrashDumpFrameData();

public:
    // NOLINTBEGIN
    MCAPI CrashDumpFrameData(int, int, uint64, float, float, float, float);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static ::ll::CArrayT<struct CrashDumpFormatEntryImpl const>& kFormat();

    // NOLINTEND
};
