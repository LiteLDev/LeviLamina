#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterInputs {
public:
    // prevent constructor by default
    FilterInputs& operator=(FilterInputs const&);
    FilterInputs(FilterInputs const&);
    FilterInputs();

public:
    // NOLINTBEGIN
    MCAPI ~FilterInputs();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
