#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class EnchantingInputContainerValidation : public ::ContainerValidationBase {

public:
    // prevent constructor by default
    EnchantingInputContainerValidation& operator=(EnchantingInputContainerValidation const&) = delete;
    EnchantingInputContainerValidation(EnchantingInputContainerValidation const&)            = delete;
    EnchantingInputContainerValidation()                                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?isValidSlotForContainer\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVContainer\@\@H\@Z
     */
    virtual bool
    isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?isItemAllowedInSlot\@EnchantingInputContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    virtual bool
    isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?isItemAllowedToAdd\@EnchantingInputContainerValidation\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool isItemAllowedToAdd(class ItemStack const&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?isItemAllowedToRemove\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const&, class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?canItemMoveToContainer\@ContainerValidationBase\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?canDestroy\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getContainerOffset\@EnchantingInputContainerValidation\@\@UEBAHAEBVContainerScreenContext\@\@\@Z
     */
    virtual int getContainerOffset(class ContainerScreenContext const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANTINGINPUTCONTAINERVALIDATION
    /**
     * @symbol ?getAvailableSetCount\@EnchantingInputContainerValidation\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    MCVAPI int getAvailableSetCount(int, class ItemStackBase const&) const; // NOLINT
#endif
};
