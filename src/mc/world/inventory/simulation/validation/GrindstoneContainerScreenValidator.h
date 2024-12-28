#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class GrindstoneContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    GrindstoneContainerScreenValidator& operator=(GrindstoneContainerScreenValidator const&);
    GrindstoneContainerScreenValidator(GrindstoneContainerScreenValidator const&);
    GrindstoneContainerScreenValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GrindstoneContainerScreenValidator() /*override*/;
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
