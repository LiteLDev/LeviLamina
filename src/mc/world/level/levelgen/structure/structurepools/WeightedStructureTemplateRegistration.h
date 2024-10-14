#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WeightedStructureTemplateRegistration {
public:
    // prevent constructor by default
    WeightedStructureTemplateRegistration& operator=(WeightedStructureTemplateRegistration const&);
    WeightedStructureTemplateRegistration(WeightedStructureTemplateRegistration const&);
    WeightedStructureTemplateRegistration();

public:
    // NOLINTBEGIN
    MCAPI ~WeightedStructureTemplateRegistration();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
