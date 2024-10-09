#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EcsEventDispatcher {
public:
    // prevent constructor by default
    EcsEventDispatcher& operator=(EcsEventDispatcher const&);
    EcsEventDispatcher(EcsEventDispatcher const&);
    EcsEventDispatcher();

public:
    // NOLINTBEGIN
    MCAPI void update();

    // NOLINTEND
};
