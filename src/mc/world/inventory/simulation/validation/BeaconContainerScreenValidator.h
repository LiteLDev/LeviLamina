#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class BeaconContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    BeaconContainerScreenValidator& operator=(BeaconContainerScreenValidator const&);
    BeaconContainerScreenValidator(BeaconContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeaconContainerScreenValidator() = default;

    MCAPI BeaconContainerScreenValidator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
