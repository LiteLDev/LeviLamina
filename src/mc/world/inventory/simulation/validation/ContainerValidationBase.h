#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerValidationBase {

public:
    // prevent constructor by default
    ContainerValidationBase& operator=(ContainerValidationBase const&) = delete;
    ContainerValidationBase(ContainerValidationBase const&)            = delete;
    ContainerValidationBase()                                          = delete;

public:
    // NOLINTBEGIN
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
    MCVAPI int32_t getAvailableSetCount(int32_t, class ItemStackBase const&) const;
    /**
     * @symbol ?getContainerOffset\@ContainerValidationBase\@\@UEBAHAEBVContainerScreenContext\@\@\@Z
     */
    MCVAPI int32_t getContainerOffset(class ContainerScreenContext const&) const;
    /**
     * @symbol ?getContainerSize\@ContainerValidationBase\@\@UEBAHAEBVContainerScreenContext\@\@AEBVContainer\@\@\@Z
     */
    MCVAPI int32_t getContainerSize(class ContainerScreenContext const&, class Container const&) const;
    /**
     * @symbol
     * ?isItemAllowedInSlot\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    MCVAPI bool
    isItemAllowedInSlot(class ContainerScreenContext const&, int32_t, class ItemStackBase const&, int32_t) const;
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
    MCVAPI bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int32_t) const;
#endif
    // NOLINTEND
};
