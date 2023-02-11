/**
 * @file  CartographyInputContainerValidation.hpp
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
 * @brief MC class CartographyInputContainerValidation.
 *
 */
class CartographyInputContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CARTOGRAPHYINPUTCONTAINERVALIDATION
public:
    class CartographyInputContainerValidation& operator=(class CartographyInputContainerValidation const &) = delete;
    CartographyInputContainerValidation(class CartographyInputContainerValidation const &) = delete;
    CartographyInputContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CartographyInputContainerValidation();
    /**
     * @hash   437413614
     * @vftbl  1
     * @symbol  ?isValidSlotForContainer\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVContainer\@\@H\@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @hash   1105455544
     * @vftbl  2
     * @symbol  ?isItemAllowedInSlot\@CartographyInputContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @hash   152975013
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
     * @hash   1461348529
     * @vftbl  6
     * @symbol  ?canItemMoveToContainer\@ContainerValidationBase\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @hash   -1615256059
     * @vftbl  7
     * @symbol  ?canDestroy\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @hash   1910719710
     * @vftbl  8
     * @symbol  ?getContainerOffset\@CartographyInputContainerValidation\@\@UEBAHAEBVContainerScreenContext\@\@\@Z
     */
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
    /**
     * @hash   -998497210
     * @vftbl  9
     * @symbol  ?getContainerSize\@ContainerValidationBase\@\@UEBAHAEBVContainerScreenContext\@\@AEBVContainer\@\@\@Z
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;

};