#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class Trade1ContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    Trade1ContainerScreenValidator& operator=(Trade1ContainerScreenValidator const&);
    Trade1ContainerScreenValidator(Trade1ContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Trade1ContainerScreenValidator() = default;

    MCAPI Trade1ContainerScreenValidator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
