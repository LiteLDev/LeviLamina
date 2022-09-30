/**
 * @file  ContainerScreenValidatorBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerScreenValidatorBase.
 *
 */
class ContainerScreenValidatorBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENVALIDATORBASE
public:
    class ContainerScreenValidatorBase& operator=(class ContainerScreenValidatorBase const &) = delete;
    ContainerScreenValidatorBase(class ContainerScreenValidatorBase const &) = delete;
    ContainerScreenValidatorBase() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ContainerScreenValidatorBase();
    /**
     * @hash   -1836202123
     * @vftbl  1
     * @symbol ?postCommitItemRemoved@ContainerScreenValidatorBase@@UEAA?AV?$shared_ptr@VContainerValidationCommitObject@@@std@@W4ContainerEnumName@@HAEBVItemStack@@@Z
     */
    virtual class std::shared_ptr<class ContainerValidationCommitObject> postCommitItemRemoved(enum class ContainerEnumName, int, class ItemStack const &);
    /**
     * @hash   -975604999
     * @vftbl  2
     * @symbol ?isCraftingImplemented@ContainerScreenValidatorBase@@UEAA_NXZ
     */
    virtual bool isCraftingImplemented();
    /**
     * @hash   -1988263019
     * @vftbl  3
     * @symbol ?getCraftResult@ContainerScreenValidatorBase@@UEAA?AUContainerValidationCraftResult@@AEBVContainerScreenContext@@AEAVContainerScreenValidation@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
     */
    virtual struct ContainerValidationCraftResult getCraftResult(class ContainerScreenContext const &, class ContainerScreenValidation &, std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @hash   662933023
     * @symbol ?isValidContainerForScreen@ContainerScreenValidatorBase@@QEBA_NW4ContainerEnumName@@@Z
     */
    MCAPI bool isValidContainerForScreen(enum class ContainerEnumName) const;

};