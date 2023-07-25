#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChargeableItemComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHARGEABLEITEMCOMPONENT
public:
    ChargeableItemComponent& operator=(ChargeableItemComponent const&) = delete;
    ChargeableItemComponent(ChargeableItemComponent const&)            = delete;
    ChargeableItemComponent()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@ChargeableItemComponent\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol
     * ?buildNetworkTag\@ChargeableItemComponent\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol ?initializeFromNetwork\@ChargeableItemComponent\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol ?getMovementModifier\@ChargeableItemComponent\@\@QEBAMXZ
     */
    MCAPI float getMovementModifier() const;
    /**
     * @symbol ?bindType\@ChargeableItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@ChargeableItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
};
