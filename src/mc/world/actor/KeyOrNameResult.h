#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KeyOrNameResult {
public:
    // prevent constructor by default
    KeyOrNameResult& operator=(KeyOrNameResult const&);
    KeyOrNameResult(KeyOrNameResult const&);
    KeyOrNameResult();

public:
    // NOLINTBEGIN
    MCAPI ~KeyOrNameResult();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
