#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HasPropertyFilter {
public:
    // prevent constructor by default
    HasPropertyFilter(HasPropertyFilter const&);
    HasPropertyFilter();

public:
    // NOLINTBEGIN
    MCAPI struct HasPropertyFilter& operator=(struct HasPropertyFilter const&);

    MCAPI ~HasPropertyFilter();

    // NOLINTEND
};
