#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerValidationBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATIONBASE
public:
    ContainerValidationBase& operator=(ContainerValidationBase const&) = delete;
    ContainerValidationBase(ContainerValidationBase const&)            = delete;
    ContainerValidationBase()                                          = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERVALIDATIONBASE
    /**
     * @symbol ?canDestroy\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    MCVAPI bool canDestroy(class ContainerScreenContext const&) const;
    /**
     * @symbol ?canItemMoveToContainer\@ContainerValidationBase\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const&) const;
    /**
     * @symbol ?getAvailableSetCount\@ContainerValidationBase\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    MCVAPI int getAvailableSetCount(int, class ItemStackBase const&) const;
    /**
     * @symbol ?getContainerOffset\@ContainerValidationBase\@\@UEBAHAEBVContainerScreenContext\@\@\@Z
     */
    MCVAPI int getContainerOffset(class ContainerScreenContext const&) const;
    /**
     * @symbol ?getContainerSize\@ContainerValidationBase\@\@UEBAHAEBVContainerScreenContext\@\@AEBVContainer\@\@\@Z
     */
    MCVAPI int getContainerSize(class ContainerScreenContext const&, class Container const&) const;
    /**
     * @symbol
     * ?isItemAllowedInSlot\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    MCVAPI bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /**
     * @symbol ?isItemAllowedToAdd\@ContainerValidationBase\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    MCVAPI bool isItemAllowedToAdd(class ItemStack const&) const;
    /**
     * @symbol
     * ?isItemAllowedToRemove\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool isItemAllowedToRemove(class ContainerScreenContext const&, class ItemStackBase const&) const;
    /**
     * @symbol
     * ?isValidSlotForContainer\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVContainer\@\@H\@Z
     */
    MCVAPI bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
#endif
};
