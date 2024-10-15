#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class LoomContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    LoomContainerScreenValidator& operator=(LoomContainerScreenValidator const&);
    LoomContainerScreenValidator(LoomContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoomContainerScreenValidator() = default;

    MCAPI LoomContainerScreenValidator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
