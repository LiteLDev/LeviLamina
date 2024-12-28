#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class LoomContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    LoomContainerScreenValidator& operator=(LoomContainerScreenValidator const&);
    LoomContainerScreenValidator(LoomContainerScreenValidator const&);
    LoomContainerScreenValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoomContainerScreenValidator() /*override*/;
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
