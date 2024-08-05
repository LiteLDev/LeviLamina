#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/ContainerScreenValidatorBase.h"

class AnvilContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    AnvilContainerScreenValidator& operator=(AnvilContainerScreenValidator const&);
    AnvilContainerScreenValidator(AnvilContainerScreenValidator const&);
    AnvilContainerScreenValidator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AnvilContainerScreenValidator() = default;

    // vIndex: 2
    virtual bool isCraftingImplemented();

    // vIndex: 3
    virtual struct ContainerValidationCraftResult
    getCraftResult(class ContainerScreenContext const& screenContext, class ContainerScreenValidation&, std::unique_ptr<struct ContainerValidationCraftInputs>);

    // NOLINTEND
};
