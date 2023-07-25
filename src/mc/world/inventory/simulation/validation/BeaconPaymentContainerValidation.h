#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class BeaconPaymentContainerValidation : public ::ContainerValidationBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEACONPAYMENTCONTAINERVALIDATION
public:
    BeaconPaymentContainerValidation& operator=(BeaconPaymentContainerValidation const&) = delete;
    BeaconPaymentContainerValidation(BeaconPaymentContainerValidation const&)            = delete;
    BeaconPaymentContainerValidation()                                                   = delete;
#endif

public:
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
     * @symbol
     * ?isItemAllowedInSlot\@BeaconPaymentContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@HAEBVItemStackBase\@\@H\@Z
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?isItemAllowedToAdd\@BeaconPaymentContainerValidation\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    virtual bool isItemAllowedToAdd(class ItemStack const&) const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?canItemMoveToContainer\@ContainerValidationBase\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const&) const;
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol ?getContainerOffset\@BeaconPaymentContainerValidation\@\@UEBAHAEBVContainerScreenContext\@\@\@Z
     */
    virtual int getContainerOffset(class ContainerScreenContext const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEACONPAYMENTCONTAINERVALIDATION
    /**
     * @symbol ?canDestroy\@BeaconPaymentContainerValidation\@\@UEBA_NAEBVContainerScreenContext\@\@\@Z
     */
    MCVAPI bool canDestroy(class ContainerScreenContext const&) const;
    /**
     * @symbol ?getAvailableSetCount\@BeaconPaymentContainerValidation\@\@UEBAHHAEBVItemStackBase\@\@\@Z
     */
    MCVAPI int getAvailableSetCount(int, class ItemStackBase const&) const;
#endif
};
