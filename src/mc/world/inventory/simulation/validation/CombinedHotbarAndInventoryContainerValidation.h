#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class CombinedHotbarAndInventoryContainerValidation : public ::ContainerValidationBase {

public:
    // prevent constructor by default
    CombinedHotbarAndInventoryContainerValidation&
    operator=(CombinedHotbarAndInventoryContainerValidation const&)                                     = delete;
    CombinedHotbarAndInventoryContainerValidation(CombinedHotbarAndInventoryContainerValidation const&) = delete;
    CombinedHotbarAndInventoryContainerValidation()                                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?isValidSlotForContainer\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVContainer\@\@H\@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?getAvailableSetCount\@ContainerValidationBase\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const&) const;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol
     * ?isItemAllowedToRemove\@CombinedHotbarAndInventoryContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const&, class ItemStackBase const&) const;
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol ?canDestroy\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const&) const;
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol
     * ?getContainerSize\@CombinedHotbarAndInventoryContainerValidation\@\@UEBAHAEBVContainerScreenContext\@\@AEBVContainer\@\@\@Z
     */
    virtual int getContainerSize(class ContainerScreenContext const&, class Container const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMBINEDHOTBARANDINVENTORYCONTAINERVALIDATION
    /**
     * @symbol ?canItemMoveToContainer\@CombinedHotbarAndInventoryContainerValidation\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const&) const;
#endif
    // NOLINTEND
};
