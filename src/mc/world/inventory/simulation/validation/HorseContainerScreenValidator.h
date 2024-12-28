#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class HorseContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    HorseContainerScreenValidator& operator=(HorseContainerScreenValidator const&);
    HorseContainerScreenValidator(HorseContainerScreenValidator const&);
    HorseContainerScreenValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HorseContainerScreenValidator() /*override*/;
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
