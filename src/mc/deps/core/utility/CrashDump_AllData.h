#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDump_AllData {
public:
    // prevent constructor by default
    CrashDump_AllData& operator=(CrashDump_AllData const&);
    CrashDump_AllData(CrashDump_AllData const&);

public:
    // NOLINTBEGIN
    MCAPI CrashDump_AllData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
