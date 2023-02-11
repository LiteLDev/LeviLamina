/**
 * @file  MaterialReducerInputValidation.hpp
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
 * @brief MC class MaterialReducerInputValidation.
 *
 */
class MaterialReducerInputValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MATERIALREDUCERINPUTVALIDATION
public:
    class MaterialReducerInputValidation& operator=(class MaterialReducerInputValidation const &) = delete;
    MaterialReducerInputValidation(class MaterialReducerInputValidation const &) = delete;
    MaterialReducerInputValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MaterialReducerInputValidation();
    /**
     * @hash   -740873502
     * @vftbl  1
     * @symbol  ?isValidSlotForContainer\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVContainer\@\@H\@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @hash   -148767468
     * @vftbl  2
     * @symbol  ?isItemAllowedInSlot\@MaterialReducerInputValidation\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -253397283
     * @vftbl  4
     * @symbol  ?isItemAllowedToAdd\@MaterialReducerInputValidation\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool isItemAllowedToAdd(class ItemStack const &) const;
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -278423131
     * @vftbl  6
     * @symbol  ?canItemMoveToContainer\@ContainerValidationBase\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @hash   -1943931774
     * @vftbl  8
     * @symbol  ?getContainerOffset\@MaterialReducerInputValidation\@\@UEBAHAEBVContainerScreenContext\@\@\@Z
     */
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MATERIALREDUCERINPUTVALIDATION
    /**
     * @hash   286828073
     * @symbol  ?canDestroy\@MaterialReducerInputValidation\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    MCVAPI bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @hash   1152055521
     * @symbol  ?getAvailableSetCount\@MaterialReducerInputValidation\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    MCVAPI int getAvailableSetCount(int, class ItemStackBase const &) const;
#endif
    /**
     * @hash   1290209611
     * @symbol  ??0MaterialReducerInputValidation\@\@QEAA\@AEBVContainerScreenContext\@\@\@Z
     */
    MCAPI MaterialReducerInputValidation(class ContainerScreenContext const &);

};