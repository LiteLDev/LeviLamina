#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TeleportTarget {
public:
    // prevent constructor by default
    TeleportTarget& operator=(TeleportTarget const&);
    TeleportTarget(TeleportTarget const&);
    TeleportTarget();

public:
    // NOLINTBEGIN
    MCAPI ~TeleportTarget();

    // NOLINTEND
};
