#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

class ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    ContainerScreenValidatorBase& operator=(ContainerScreenValidatorBase const&);
    ContainerScreenValidatorBase(ContainerScreenValidatorBase const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerScreenValidatorBase();

    // vIndex: 1
    virtual std::shared_ptr<class ContainerValidationCommitObject>
    postCommitItemRemoved(::ContainerEnumName, int, class ItemStack const&);

    // vIndex: 2
    virtual bool isCraftingImplemented();

    // vIndex: 3
    virtual struct ContainerValidationCraftResult getCraftResult(
        class ContainerScreenContext const&                    screenContext,
        class ContainerScreenValidation&                       screenValidation,
        std::unique_ptr<struct ContainerValidationCraftInputs> craftInputs
    );

    MCAPI ContainerScreenValidatorBase();

    // NOLINTEND
};
