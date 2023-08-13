#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

class ChargeableItemComponent : public ::ItemComponent {

public:
    // prevent constructor by default
    ChargeableItemComponent& operator=(ChargeableItemComponent const&) = delete;
    ChargeableItemComponent(ChargeableItemComponent const&)            = delete;
    ChargeableItemComponent()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?isNetworkComponent\@ChargeableItemComponent\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
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
    // NOLINTEND
};
