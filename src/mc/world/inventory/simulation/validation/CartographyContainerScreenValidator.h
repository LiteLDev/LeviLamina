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

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~CartographyContainerScreenValidator();

    // vIndex: 2, symbol: ?isCraftingImplemented@CartographyContainerScreenValidator@@UEAA_NXZ
    virtual bool isCraftingImplemented();

    // vIndex: 3, symbol:
    // ?getCraftResult@CartographyContainerScreenValidator@@UEAA?AUContainerValidationCraftResult@@AEBVContainerScreenContext@@AEAVContainerScreenValidation@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
    virtual struct ContainerValidationCraftResult
    getCraftResult(class ContainerScreenContext const&, class ContainerScreenValidation&, std::unique_ptr<struct ContainerValidationCraftInputs>);

    // symbol: ??0CartographyContainerScreenValidator@@QEAA@XZ
    MCAPI CartographyContainerScreenValidator();

    // NOLINTEND
};
