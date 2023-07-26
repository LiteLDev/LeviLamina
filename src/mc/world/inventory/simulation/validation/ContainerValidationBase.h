#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerValidationBase {

public:
    // prevent constructor by default
    ContainerValidationBase& operator=(ContainerValidationBase const&) = delete;
    ContainerValidationBase(ContainerValidationBase const&)            = delete;
    ContainerValidationBase()                                          = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERVALIDATIONBASE
    /**
     * @symbol ?canDestroy\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    MCVAPI bool canDestroy(class ContainerScreenContext const&) const; // NOLINT
    /**
     * @symbol ?canItemMoveToContainer\@ContainerValidationBase\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?getAvailableSetCount\@ContainerValidationBase\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    MCVAPI int getAvailableSetCount(int, class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?getContainerOffset\@ContainerValidationBase\@\@UEBAHAEBVContainerScreenContext\@\@\@Z
     */
    MCVAPI int getContainerOffset(class ContainerScreenContext const&) const; // NOLINT
    /**
     * @symbol ?getContainerSize\@ContainerValidationBase\@\@UEBAHAEBVContainerScreenContext\@\@AEBVContainer\@\@\@Z
     */
    MCVAPI int getContainerSize(class ContainerScreenContext const&, class Container const&) const; // NOLINT
    /**
     * @symbol
     * ?isItemAllowedInSlot\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    MCVAPI bool
    isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const; // NOLINT
    /**
     * @symbol ?isItemAllowedToAdd\@ContainerValidationBase\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    MCVAPI bool isItemAllowedToAdd(class ItemStack const&) const; // NOLINT
    /**
     * @symbol
     * ?isItemAllowedToRemove\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool isItemAllowedToRemove(class ContainerScreenContext const&, class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol
     * ?isValidSlotForContainer\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVContainer\@\@H\@Z
     */
    MCVAPI bool
    isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const; // NOLINT
#endif
};
