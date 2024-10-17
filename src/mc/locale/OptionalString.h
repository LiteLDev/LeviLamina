#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OptionalString {
public:
    // prevent constructor by default
    OptionalString& operator=(OptionalString const&);
    OptionalString(OptionalString const&);
    OptionalString();

public:
    // NOLINTBEGIN
    MCAPI ~OptionalString();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
