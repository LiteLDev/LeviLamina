#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class HUDContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    HUDContainerScreenValidator& operator=(HUDContainerScreenValidator const&);
    HUDContainerScreenValidator(HUDContainerScreenValidator const&);
    HUDContainerScreenValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HUDContainerScreenValidator() /*override*/;
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
