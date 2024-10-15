#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class EnchantingContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    EnchantingContainerScreenValidator& operator=(EnchantingContainerScreenValidator const&);
    EnchantingContainerScreenValidator(EnchantingContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnchantingContainerScreenValidator() = default;

    MCAPI EnchantingContainerScreenValidator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
