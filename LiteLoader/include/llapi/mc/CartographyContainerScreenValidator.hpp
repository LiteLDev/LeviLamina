/**
 * @file  MC/CartographyContainerScreenValidator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CartographyContainerScreenValidator.
 *
 */
class CartographyContainerScreenValidator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CARTOGRAPHYCONTAINERSCREENVALIDATOR
public:
    class CartographyContainerScreenValidator& operator=(class CartographyContainerScreenValidator const &) = delete;
    CartographyContainerScreenValidator(class CartographyContainerScreenValidator const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CartographyContainerScreenValidator();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   62454704
     * @vftbl  2
     * @symbol ?isCraftingImplemented@CartographyContainerScreenValidator@@UEAA_NXZ
     */
    virtual bool isCraftingImplemented();
    /**
     * @hash   959994078
     * @vftbl  3
     * @symbol ?getCraftResult@CartographyContainerScreenValidator@@UEAA?AUContainerValidationCraftResult@@AEBVContainerScreenContext@@AEAVContainerScreenValidation@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
     */
    virtual struct ContainerValidationCraftResult getCraftResult(class ContainerScreenContext const &, class ContainerScreenValidation &, std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @hash   -211518005
     * @symbol ??0CartographyContainerScreenValidator@@QEAA@XZ
     */
    MCAPI CartographyContainerScreenValidator();

};