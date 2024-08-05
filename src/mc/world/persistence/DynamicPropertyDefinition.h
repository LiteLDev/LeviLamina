#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DynamicPropertyDefinition {
public:
    // prevent constructor by default
    DynamicPropertyDefinition& operator=(DynamicPropertyDefinition const&);
    DynamicPropertyDefinition(DynamicPropertyDefinition const&);
    DynamicPropertyDefinition();

public:
    // NOLINTBEGIN
    MCAPI ~DynamicPropertyDefinition();

    // NOLINTEND
};
