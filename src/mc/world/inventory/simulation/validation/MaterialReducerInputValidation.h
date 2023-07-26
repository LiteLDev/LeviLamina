#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class MaterialReducerInputValidation : public ::ContainerValidationBase {

public:
    // prevent constructor by default
    MaterialReducerInputValidation& operator=(MaterialReducerInputValidation const&) = delete;
    MaterialReducerInputValidation(MaterialReducerInputValidation const&)            = delete;
    MaterialReducerInputValidation()                                                 = delete;

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
     * ?isItemAllowedInSlot\@MaterialReducerInputValidation\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
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
     * @symbol ?isItemAllowedToAdd\@MaterialReducerInputValidation\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool isItemAllowedToAdd(class ItemStack const&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?canItemMoveToContainer\@ContainerValidationBase\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getContainerOffset\@MaterialReducerInputValidation\@\@UEBAHAEBVContainerScreenContext\@\@\@Z
     */
    virtual int getContainerOffset(class ContainerScreenContext const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MATERIALREDUCERINPUTVALIDATION
    /**
     * @symbol ?canDestroy\@MaterialReducerInputValidation\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    MCVAPI bool canDestroy(class ContainerScreenContext const&) const; // NOLINT
    /**
     * @symbol ?getAvailableSetCount\@MaterialReducerInputValidation\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    MCVAPI int getAvailableSetCount(int, class ItemStackBase const&) const; // NOLINT
#endif
    /**
     * @symbol ??0MaterialReducerInputValidation\@\@QEAA\@AEBVContainerScreenContext\@\@\@Z
     */
    MCAPI MaterialReducerInputValidation(class ContainerScreenContext const&); // NOLINT
};
