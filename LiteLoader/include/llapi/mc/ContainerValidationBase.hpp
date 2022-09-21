/**
 * @file  MC/ContainerValidationBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerValidationBase.
 *
 */
class ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATIONBASE
public:
    class ContainerValidationBase& operator=(class ContainerValidationBase const &) = delete;
    ContainerValidationBase(class ContainerValidationBase const &) = delete;
    ContainerValidationBase() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERVALIDATIONBASE
    /**
     * @hash   -2070320762
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     */
    MCVAPI bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @hash   1006268450
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     */
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @hash   -434207308
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     */
    MCVAPI int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @hash   -339257537
     * @symbol ?getContainerOffset@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@@Z
     */
    MCVAPI int getContainerOffset(class ContainerScreenContext const &) const;
    /**
     * @hash   1192871301
     * @symbol ?getContainerSize@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     */
    MCVAPI int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
    /**
     * @hash   -380645833
     * @symbol ?isItemAllowedInSlot@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     */
    MCVAPI bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @hash   1038204330
     * @symbol ?isItemAllowedToAdd@ContainerValidationBase@@UEBA_NAEBVItemStack@@@Z
     */
    MCVAPI bool isItemAllowedToAdd(class ItemStack const &) const;
    /**
     * @hash   -757551013
     * @symbol ?isItemAllowedToRemove@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
     */
    MCVAPI bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /**
     * @hash   50029087
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     */
    MCVAPI bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
#endif

};