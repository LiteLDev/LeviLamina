#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class LabTableContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    LabTableContainerScreenValidator& operator=(LabTableContainerScreenValidator const&);
    LabTableContainerScreenValidator(LabTableContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LabTableContainerScreenValidator() = default;

    MCAPI LabTableContainerScreenValidator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
