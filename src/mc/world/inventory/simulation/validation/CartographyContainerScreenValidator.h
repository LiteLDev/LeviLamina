#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class CartographyContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    CartographyContainerScreenValidator& operator=(CartographyContainerScreenValidator const&);
    CartographyContainerScreenValidator(CartographyContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CartographyContainerScreenValidator() = default;

    // vIndex: 2
    virtual bool isCraftingImplemented();

    // vIndex: 3
    virtual struct ContainerValidationCraftResult getCraftResult(
        class ContainerScreenContext const&                    screenContext,
        class ContainerScreenValidation&                       screenValidation,
        std::unique_ptr<struct ContainerValidationCraftInputs> craftInputs
    );

    MCAPI CartographyContainerScreenValidator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI struct ContainerValidationCraftResult getCraftResult$(
        class ContainerScreenContext const&                    screenContext,
        class ContainerScreenValidation&                       screenValidation,
        std::unique_ptr<struct ContainerValidationCraftInputs> craftInputs
    );

    MCAPI bool isCraftingImplemented$();

    // NOLINTEND
};
