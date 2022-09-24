/**
 * @file  FurnaceContainerScreenValidator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerScreenValidatorBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FurnaceContainerScreenValidator.
 *
 */
class FurnaceContainerScreenValidator : public ContainerScreenValidatorBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FURNACECONTAINERSCREENVALIDATOR
public:
    class FurnaceContainerScreenValidator& operator=(class FurnaceContainerScreenValidator const &) = delete;
    FurnaceContainerScreenValidator(class FurnaceContainerScreenValidator const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FurnaceContainerScreenValidator();
    /**
     * @hash   392092988
     * @vftbl  1
     * @symbol ?postCommitItemRemoved@FurnaceContainerScreenValidator@@UEAA?AV?$shared_ptr@VContainerValidationCommitObject@@@std@@W4ContainerEnumName@@HAEBVItemStack@@@Z
     */
    virtual class std::shared_ptr<class ContainerValidationCommitObject> postCommitItemRemoved(enum ContainerEnumName, int, class ItemStack const &);
    /**
     * @hash   31742249
     * @symbol ??0FurnaceContainerScreenValidator@@QEAA@XZ
     */
    MCAPI FurnaceContainerScreenValidator();

};