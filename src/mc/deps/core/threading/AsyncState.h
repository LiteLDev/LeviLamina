#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AsyncState {
public:
    // prevent constructor by default
    AsyncState& operator=(AsyncState const&);
    AsyncState(AsyncState const&);
    AsyncState();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Release();
    // NOLINTEND
};
