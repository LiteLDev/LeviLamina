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
    // vIndex: 0, symbol: __gen_??1AnvilContainerScreenValidator@@UEAA@XZ
    virtual ~AnvilContainerScreenValidator() = default;

    // vIndex: 2, symbol: ?isCraftingImplemented@AnvilContainerScreenValidator@@UEAA_NXZ
    virtual bool isCraftingImplemented();

    // vIndex: 3, symbol:
    // ?getCraftResult@AnvilContainerScreenValidator@@UEAA?AUContainerValidationCraftResult@@AEBVContainerScreenContext@@AEAVContainerScreenValidation@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
    virtual struct ContainerValidationCraftResult
    getCraftResult(class ContainerScreenContext const& screenContext, class ContainerScreenValidation&, std::unique_ptr<struct ContainerValidationCraftInputs>);

    // NOLINTEND
};
