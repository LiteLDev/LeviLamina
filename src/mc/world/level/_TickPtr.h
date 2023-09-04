#pragma once

#include "mc/_HeaderOutputPredefine.h"

class _TickPtr {
public:
    // prevent constructor by default
    _TickPtr& operator=(_TickPtr const&) = delete;
    _TickPtr(_TickPtr const&)            = delete;
    _TickPtr()                           = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1_TickPtr@@UEAA@XZ
    MCVAPI ~_TickPtr();

    // NOLINTEND
};
