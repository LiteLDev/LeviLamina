#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CodeBuilderSelectorFilter {
public:
    // prevent constructor by default
    CodeBuilderSelectorFilter& operator=(CodeBuilderSelectorFilter const&);
    CodeBuilderSelectorFilter(CodeBuilderSelectorFilter const&);
    CodeBuilderSelectorFilter();

public:
    // NOLINTBEGIN
    MCAPI ~CodeBuilderSelectorFilter();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
