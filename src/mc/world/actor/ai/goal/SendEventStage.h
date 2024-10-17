#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendEventStage {
public:
    // prevent constructor by default
    SendEventStage& operator=(SendEventStage const&);
    SendEventStage(SendEventStage const&);
    SendEventStage();

public:
    // NOLINTBEGIN
    MCAPI ~SendEventStage();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
