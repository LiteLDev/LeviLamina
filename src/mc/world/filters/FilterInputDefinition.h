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
    MCAPI void* ctor$(class FilterInput, std::string const&);

    MCAPI void dtor$();

    // NOLINTEND
};
