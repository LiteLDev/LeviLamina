/**
 * @file  AnvilContainerScreenValidator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AnvilContainerScreenValidator.
 *
 */
class AnvilContainerScreenValidator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANVILCONTAINERSCREENVALIDATOR
public:
    class AnvilContainerScreenValidator& operator=(class AnvilContainerScreenValidator const &) = delete;
    AnvilContainerScreenValidator(class AnvilContainerScreenValidator const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AnvilContainerScreenValidator();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   879545198
     * @vftbl  2
     * @symbol  ?isCraftingImplemented\@AnvilContainerScreenValidator\@\@UEAA_NXZ
     */
    virtual bool isCraftingImplemented();
    /**
     * @hash   -395601264
     * @vftbl  3
     * @symbol  ?getCraftResult\@AnvilContainerScreenValidator\@\@UEAA?AUContainerValidationCraftResult\@\@AEBVContainerScreenContext\@\@AEAVContainerScreenValidation\@\@V?$unique_ptr\@UContainerValidationCraftInputs\@\@U?$default_delete\@UContainerValidationCraftInputs\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual struct ContainerValidationCraftResult getCraftResult(class ContainerScreenContext const &, class ContainerScreenValidation &, std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @hash   -84994883
     * @symbol  ??0AnvilContainerScreenValidator\@\@QEAA\@XZ
     */
    MCAPI AnvilContainerScreenValidator();

};