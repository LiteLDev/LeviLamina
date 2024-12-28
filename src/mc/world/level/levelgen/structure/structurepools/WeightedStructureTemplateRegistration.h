#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WeightedStructureTemplateRegistration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb841fa;
    ::ll::UntypedStorage<4, 4>  mUnka7e297;
    // NOLINTEND

public:
    // prevent constructor by default
    WeightedStructureTemplateRegistration& operator=(WeightedStructureTemplateRegistration const&);
    WeightedStructureTemplateRegistration(WeightedStructureTemplateRegistration const&);
    WeightedStructureTemplateRegistration();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~WeightedStructureTemplateRegistration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
