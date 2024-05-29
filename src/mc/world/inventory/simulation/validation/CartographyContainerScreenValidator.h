#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/ContainerScreenValidatorBase.h"

class CartographyContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    CartographyContainerScreenValidator& operator=(CartographyContainerScreenValidator const&);
    CartographyContainerScreenValidator(CartographyContainerScreenValidator const&);
    CartographyContainerScreenValidator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CartographyContainerScreenValidator@@UEAA@XZ
    virtual ~CartographyContainerScreenValidator() = default;

    // vIndex: 2, symbol: ?isCraftingImplemented@CartographyContainerScreenValidator@@UEAA_NXZ
    virtual bool isCraftingImplemented();

    // vIndex: 3, symbol:
    // ?getCraftResult@CartographyContainerScreenValidator@@UEAA?AUContainerValidationCraftResult@@AEBVContainerScreenContext@@AEAVContainerScreenValidation@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
    virtual struct ContainerValidationCraftResult
    getCraftResult(class ContainerScreenContext const& screenContext, class ContainerScreenValidation&, std::unique_ptr<struct ContainerValidationCraftInputs>);

    // NOLINTEND
};
