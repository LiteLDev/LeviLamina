#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class ChestContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    ChestContainerScreenValidator& operator=(ChestContainerScreenValidator const&);
    ChestContainerScreenValidator(ChestContainerScreenValidator const&);
    ChestContainerScreenValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChestContainerScreenValidator() /*override*/;
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
