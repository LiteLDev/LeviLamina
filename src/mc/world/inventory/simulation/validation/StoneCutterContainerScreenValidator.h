#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class StoneCutterContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    StoneCutterContainerScreenValidator& operator=(StoneCutterContainerScreenValidator const&);
    StoneCutterContainerScreenValidator(StoneCutterContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StoneCutterContainerScreenValidator() = default;

    // vIndex: 2
    virtual bool isCraftingImplemented();

    // vIndex: 3
    virtual struct ContainerValidationCraftResult getCraftResult(
        class ContainerScreenContext const&                    screenContext,
        class ContainerScreenValidation&                       screenValidation,
        std::unique_ptr<struct ContainerValidationCraftInputs> craftInputs
    );

    MCAPI StoneCutterContainerScreenValidator();

    // NOLINTEND
};
