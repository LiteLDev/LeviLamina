#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DiggerBlockDefinitionTrigger {
public:
    // prevent constructor by default
    DiggerBlockDefinitionTrigger();

public:
    // NOLINTBEGIN
    MCAPI DiggerBlockDefinitionTrigger(struct DiggerBlockDefinitionTrigger const&);

    MCAPI struct DiggerBlockDefinitionTrigger& operator=(struct DiggerBlockDefinitionTrigger const&);

    MCAPI ~DiggerBlockDefinitionTrigger();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct DiggerBlockDefinitionTrigger const&);

    MCAPI void dtor$();

    // NOLINTEND
};
