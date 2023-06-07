/**
 * @file  StoneCutterContainerScreenValidator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StoneCutterContainerScreenValidator.
 *
 */
class StoneCutterContainerScreenValidator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STONECUTTERCONTAINERSCREENVALIDATOR
public:
    class StoneCutterContainerScreenValidator& operator=(class StoneCutterContainerScreenValidator const &) = delete;
    StoneCutterContainerScreenValidator(class StoneCutterContainerScreenValidator const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?isCraftingImplemented\@StoneCutterContainerScreenValidator\@\@UEAA_NXZ
     */
    virtual bool isCraftingImplemented();
    /**
     * @vftbl 3
     * @symbol ?getCraftResult\@StoneCutterContainerScreenValidator\@\@UEAA?AUContainerValidationCraftResult\@\@AEBVContainerScreenContext\@\@AEAVContainerScreenValidation\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationCraftResult getCraftResult(class ContainerScreenContext const &, class ContainerScreenValidation &, std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @symbol ??0StoneCutterContainerScreenValidator\@\@QEAA\@XZ
     */
    MCAPI StoneCutterContainerScreenValidator();

//private:
    /**
     * @symbol ?_recipeMatches\@StoneCutterContainerScreenValidator\@\@AEBA_NAEBVContainerScreenContext\@\@AEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI bool _recipeMatches(class ContainerScreenContext const &, class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &, class ItemStack const &) const;

private:

};
