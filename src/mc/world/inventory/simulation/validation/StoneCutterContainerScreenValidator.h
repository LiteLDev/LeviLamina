#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/ContainerScreenValidatorBase.h"

class StoneCutterContainerScreenValidator : public ::ContainerScreenValidatorBase {

public:
    // prevent constructor by default
    StoneCutterContainerScreenValidator& operator=(StoneCutterContainerScreenValidator const&) = delete;
    StoneCutterContainerScreenValidator(StoneCutterContainerScreenValidator const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?isCraftingImplemented\@StoneCutterContainerScreenValidator\@\@UEAA_NXZ
     */
    virtual bool isCraftingImplemented();
    /**
     * @vftbl 3
     * @symbol
     * ?getCraftResult\@StoneCutterContainerScreenValidator\@\@UEAA?AUContainerValidationCraftResult\@\@AEBVContainerScreenContext\@\@AEAVContainerScreenValidation\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationCraftResult
    getCraftResult(class ContainerScreenContext const&, class ContainerScreenValidation&, std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @symbol ??0StoneCutterContainerScreenValidator\@\@QEAA\@XZ
     */
    MCAPI StoneCutterContainerScreenValidator();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_recipeMatches\@StoneCutterContainerScreenValidator\@\@AEBA_NAEBVContainerScreenContext\@\@AEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI bool
    _recipeMatches(class ContainerScreenContext const&, class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const&, class ItemStack const&)
        const;
    // NOLINTEND
};
