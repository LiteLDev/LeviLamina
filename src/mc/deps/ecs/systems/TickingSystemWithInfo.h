#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickingSystemWithInfo {
public:
    // prevent constructor by default
    TickingSystemWithInfo& operator=(TickingSystemWithInfo const&);
    TickingSystemWithInfo(TickingSystemWithInfo const&);
    TickingSystemWithInfo();

public:
    // NOLINTBEGIN
    MCAPI TickingSystemWithInfo(struct TickingSystemWithInfo&&);

    MCAPI ~TickingSystemWithInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct TickingSystemWithInfo&&);

    MCAPI void dtor$();

    // NOLINTEND
};
