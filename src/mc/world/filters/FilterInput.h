#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FilterInput {
public:
    // prevent constructor by default
    FilterInput(FilterInput const&);
    FilterInput();

public:
    // NOLINTBEGIN
    MCAPI explicit FilterInput(int);

    MCAPI class FilterInput& operator=(class FilterInput&&);

    MCAPI class FilterInput& operator=(class FilterInput const&);

    MCAPI ~FilterInput();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(int);

    MCAPI void dtor$();

    // NOLINTEND
};
