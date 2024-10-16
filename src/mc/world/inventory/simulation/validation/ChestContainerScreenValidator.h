#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class ChestContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    ChestContainerScreenValidator& operator=(ChestContainerScreenValidator const&);
    ChestContainerScreenValidator(ChestContainerScreenValidator const&);
    ChestContainerScreenValidator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChestContainerScreenValidator() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
