#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class BrewingStandContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    BrewingStandContainerScreenValidator& operator=(BrewingStandContainerScreenValidator const&);
    BrewingStandContainerScreenValidator(BrewingStandContainerScreenValidator const&);
    BrewingStandContainerScreenValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BrewingStandContainerScreenValidator() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
