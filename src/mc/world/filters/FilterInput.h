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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
