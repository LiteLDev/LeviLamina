#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class BrewingStandContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    BrewingStandContainerScreenValidator& operator=(BrewingStandContainerScreenValidator const&);
    BrewingStandContainerScreenValidator(BrewingStandContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BrewingStandContainerScreenValidator() = default;

    MCAPI BrewingStandContainerScreenValidator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
