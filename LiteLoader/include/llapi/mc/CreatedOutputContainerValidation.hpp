/**
 * @file  CreatedOutputContainerValidation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CreatedOutputContainerValidation.
 *
 */
class CreatedOutputContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATEDOUTPUTCONTAINERVALIDATION
public:
    class CreatedOutputContainerValidation& operator=(class CreatedOutputContainerValidation const &) = delete;
    CreatedOutputContainerValidation(class CreatedOutputContainerValidation const &) = delete;
    CreatedOutputContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CreatedOutputContainerValidation();
    /**
     * @vftbl  1
     * @symbol  ?isValidSlotForContainer\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVContainer\@\@H\@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  ?getAvailableSetCount\@ContainerValidationBase\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  ?canDestroy\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @vftbl  8
     * @symbol  ?getContainerOffset\@CreatedOutputContainerValidation\@\@UEBAHAEBVContainerScreenContext\@\@\@Z
     */
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /**
     * @vftbl  9
     * @symbol  ?getContainerSize\@ContainerValidationBase\@\@UEBAHAEBVContainerScreenContext\@\@AEBVContainer\@\@\@Z
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CREATEDOUTPUTCONTAINERVALIDATION
    /**
     * @symbol  ?canItemMoveToContainer\@CreatedOutputContainerValidation\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @symbol  ?isItemAllowedInSlot\@CreatedOutputContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    MCVAPI bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @symbol  ?isItemAllowedToAdd\@CreatedOutputContainerValidation\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    MCVAPI bool isItemAllowedToAdd(class ItemStack const &) const;
#endif

};