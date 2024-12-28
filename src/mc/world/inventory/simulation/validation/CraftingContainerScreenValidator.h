#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class CraftingContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    CraftingContainerScreenValidator& operator=(CraftingContainerScreenValidator const&);
    CraftingContainerScreenValidator(CraftingContainerScreenValidator const&);
    CraftingContainerScreenValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftingContainerScreenValidator() /*override*/;
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
