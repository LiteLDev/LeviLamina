#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class BeaconContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    BeaconContainerScreenValidator& operator=(BeaconContainerScreenValidator const&);
    BeaconContainerScreenValidator(BeaconContainerScreenValidator const&);
    BeaconContainerScreenValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeaconContainerScreenValidator() /*override*/;
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
