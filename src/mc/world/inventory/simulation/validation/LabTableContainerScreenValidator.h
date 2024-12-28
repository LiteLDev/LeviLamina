#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class LabTableContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    LabTableContainerScreenValidator& operator=(LabTableContainerScreenValidator const&);
    LabTableContainerScreenValidator(LabTableContainerScreenValidator const&);
    LabTableContainerScreenValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LabTableContainerScreenValidator() /*override*/;
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
