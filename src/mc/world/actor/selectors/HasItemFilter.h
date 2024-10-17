#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HasItemFilter {
public:
    // prevent constructor by default
    HasItemFilter(HasItemFilter const&);
    HasItemFilter();

public:
    // NOLINTBEGIN
    MCAPI struct HasItemFilter& operator=(struct HasItemFilter const&);

    MCAPI ~HasItemFilter();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
