#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterInputDefinition {
public:
    // prevent constructor by default
    FilterInputDefinition& operator=(FilterInputDefinition const&);
    FilterInputDefinition(FilterInputDefinition const&);
    FilterInputDefinition();

public:
    // NOLINTBEGIN
    MCAPI FilterInputDefinition(class FilterInput, std::string const&);

    MCAPI ~FilterInputDefinition();

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
