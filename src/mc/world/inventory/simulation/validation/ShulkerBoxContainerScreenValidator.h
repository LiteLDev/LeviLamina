#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class ShulkerBoxContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    ShulkerBoxContainerScreenValidator& operator=(ShulkerBoxContainerScreenValidator const&);
    ShulkerBoxContainerScreenValidator(ShulkerBoxContainerScreenValidator const&);
    ShulkerBoxContainerScreenValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShulkerBoxContainerScreenValidator() /*override*/;
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
