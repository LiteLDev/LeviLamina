#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SystemTiming {
public:
    // prevent constructor by default
    SystemTiming& operator=(SystemTiming const&);
    SystemTiming(SystemTiming const&);
    SystemTiming();

public:
    // NOLINTBEGIN
    MCAPI ~SystemTiming();

    // NOLINTEND
};
