#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class CursorContainerValidation : public ::ContainerValidationBase {

public:
    // prevent constructor by default
    CursorContainerValidation& operator=(CursorContainerValidation const&) = delete;
    CursorContainerValidation(CursorContainerValidation const&)            = delete;
    CursorContainerValidation()                                            = delete;

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
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?canDestroy\@ContainerValidationBase\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    virtual bool canDestroy(class ContainerScreenContext const&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getContainerOffset\@CursorContainerValidation\@\@UEBAHAEBVContainerScreenContext\@\@\@Z
     */
    virtual int getContainerOffset(class ContainerScreenContext const&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?getContainerSize\@ContainerValidationBase\@\@UEBAHAEBVContainerScreenContext\@\@AEBVContainer\@\@\@Z
     */
    virtual int getContainerSize(class ContainerScreenContext const&, class Container const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CURSORCONTAINERVALIDATION
    /**
     * @symbol ?canItemMoveToContainer\@CursorContainerValidation\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool canItemMoveToContainer(class ItemStackBase const&) const; // NOLINT
#endif
};
