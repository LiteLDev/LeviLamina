#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class PreviewContainerValidation : public ::ContainerValidationBase {

public:
    // prevent constructor by default
    PreviewContainerValidation& operator=(PreviewContainerValidation const&) = delete;
    PreviewContainerValidation(PreviewContainerValidation const&)            = delete;
    PreviewContainerValidation()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getAvailableSetCount\@ContainerValidationBase\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
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
     * @symbol ?canDestroy\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PREVIEWCONTAINERVALIDATION
    /**
     * @symbol
     * ?isItemAllowedInSlot\@PreviewContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    MCVAPI bool
    isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const; // NOLINT
    /**
     * @symbol ?isItemAllowedToAdd\@PreviewContainerValidation\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    MCVAPI bool isItemAllowedToAdd(class ItemStack const&) const; // NOLINT
    /**
     * @symbol
     * ?isValidSlotForContainer\@PreviewContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVContainer\@\@H\@Z
     */
    MCVAPI bool
    isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const; // NOLINT
#endif
};
