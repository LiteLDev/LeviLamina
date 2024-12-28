#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class BarrelContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    BarrelContainerScreenValidator& operator=(BarrelContainerScreenValidator const&);
    BarrelContainerScreenValidator(BarrelContainerScreenValidator const&);
    BarrelContainerScreenValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BarrelContainerScreenValidator() /*override*/;
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
