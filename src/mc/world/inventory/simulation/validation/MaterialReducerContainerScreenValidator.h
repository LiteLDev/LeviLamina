#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class MaterialReducerContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    MaterialReducerContainerScreenValidator& operator=(MaterialReducerContainerScreenValidator const&);
    MaterialReducerContainerScreenValidator(MaterialReducerContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MaterialReducerContainerScreenValidator() = default;

    MCAPI MaterialReducerContainerScreenValidator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
