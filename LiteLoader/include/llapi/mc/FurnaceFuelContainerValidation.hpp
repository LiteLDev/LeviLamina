/**
 * @file  FurnaceFuelContainerValidation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FurnaceFuelContainerValidation.
 *
 */
class FurnaceFuelContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FURNACEFUELCONTAINERVALIDATION
public:
    class FurnaceFuelContainerValidation& operator=(class FurnaceFuelContainerValidation const &) = delete;
    FurnaceFuelContainerValidation(class FurnaceFuelContainerValidation const &) = delete;
    FurnaceFuelContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FurnaceFuelContainerValidation();
    /**
     * @hash   109477216
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @hash   1163600134
     * @vftbl  2
     * @symbol ?isItemAllowedInSlot@FurnaceFuelContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @hash   219032979
     * @vftbl  3
     * @symbol ?getAvailableSetCount@FurnaceFuelContainerValidation@@UEBAHHAEBVItemStackBase@@@Z
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @hash   -1194859029
     * @vftbl  4
     * @symbol ?isItemAllowedToAdd@FurnaceFuelContainerValidation@@UEBA_NAEBVItemStack@@@Z
     */
    virtual bool isItemAllowedToAdd(class ItemStack const &) const;
    /**
     * @hash   768387322
     * @vftbl  5
     * @symbol ?isItemAllowedToRemove@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /**
     * @hash   778397603
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @hash   1996775687
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FURNACEFUELCONTAINERVALIDATION
    /**
     * @hash   724072624
     * @symbol ?getContainerOffset@FurnaceFuelContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
     */
    MCVAPI int getContainerOffset(class ContainerScreenContext const &) const;
#endif

};