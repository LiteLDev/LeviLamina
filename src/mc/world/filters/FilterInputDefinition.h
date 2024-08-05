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
    MCAPI FilterInputDefinition(class FilterInput f, std::string const& d);

    MCAPI ~FilterInputDefinition();

    // NOLINTEND
};
