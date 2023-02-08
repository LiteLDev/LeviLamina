/**
 * @file  BrewingStandFuelContainerValidation.hpp
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
 * @brief MC class BrewingStandFuelContainerValidation.
 *
 */
class BrewingStandFuelContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREWINGSTANDFUELCONTAINERVALIDATION
public:
    class BrewingStandFuelContainerValidation& operator=(class BrewingStandFuelContainerValidation const &) = delete;
    BrewingStandFuelContainerValidation(class BrewingStandFuelContainerValidation const &) = delete;
    BrewingStandFuelContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BrewingStandFuelContainerValidation();
    /**
     * @hash   -618509454
     * @vftbl  1
     * @symbol  ?isValidSlotForContainer\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVContainer\@\@H\@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @hash   -1706815596
     * @vftbl  2
     * @symbol  ?isItemAllowedInSlot\@BrewingStandFuelContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @hash   -1543655007
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
     * @hash   2099355189
     * @vftbl  6
     * @symbol  ?canItemMoveToContainer\@ContainerValidationBase\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @hash   -977249399
     * @vftbl  7
     * @symbol  ?canDestroy\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @hash   2098019458
     * @vftbl  8
     * @symbol  ?getContainerOffset\@BrewingStandFuelContainerValidation\@\@UEBAHAEBVContainerScreenContext\@\@\@Z
     */
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /**
     * @hash   1599840066
     * @vftbl  9
     * @symbol  ?getContainerSize\@ContainerValidationBase\@\@UEBAHAEBVContainerScreenContext\@\@AEBVContainer\@\@\@Z
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;

};