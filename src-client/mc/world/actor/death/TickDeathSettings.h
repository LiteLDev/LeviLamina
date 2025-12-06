#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickDeathSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mEnabled;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickDeathSettings getDefault();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::TickDeathSettings const& DEFAULT();
    // NOLINTEND
};
