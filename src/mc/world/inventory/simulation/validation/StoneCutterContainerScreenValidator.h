#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/ContainerScreenValidatorBase.h"

class StoneCutterContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    StoneCutterContainerScreenValidator& operator=(StoneCutterContainerScreenValidator const&);
    StoneCutterContainerScreenValidator(StoneCutterContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StoneCutterContainerScreenValidator@@UEAA@XZ
    virtual ~StoneCutterContainerScreenValidator() = default;

    // vIndex: 2, symbol: ?isCraftingImplemented@StoneCutterContainerScreenValidator@@UEAA_NXZ
    virtual bool isCraftingImplemented();

    // vIndex: 3, symbol:
    // ?getCraftResult@StoneCutterContainerScreenValidator@@UEAA?AUContainerValidationCraftResult@@AEBVContainerScreenContext@@AEAVContainerScreenValidation@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
    virtual struct ContainerValidationCraftResult
    getCraftResult(class ContainerScreenContext const& screenContext, class ContainerScreenValidation&, std::unique_ptr<struct ContainerValidationCraftInputs>);

    // symbol: ??0StoneCutterContainerScreenValidator@@QEAA@XZ
    MCAPI StoneCutterContainerScreenValidator();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_recipeMatches@StoneCutterContainerScreenValidator@@AEBA_NAEBVContainerScreenContext@@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@AEBVItemStack@@@Z
    MCAPI bool
    _recipeMatches(class ContainerScreenContext const& screenContext, RecipeNetId const& recipeNetId, class ItemStack const&)
        const;

    // NOLINTEND
};
