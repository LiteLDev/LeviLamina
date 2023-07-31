#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WeaponItemComponent {

public:
    // prevent constructor by default
    WeaponItemComponent& operator=(WeaponItemComponent const&) = delete;
    WeaponItemComponent(WeaponItemComponent const&)            = delete;
    WeaponItemComponent()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VWeaponItemComponent\@\@\@\@UEBA_NXZ
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
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VWeaponItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol
     * ?initializeFromNetwork\@?$NetworkedItemComponent\@VWeaponItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol
     * ?appendFormattedHovertext\@WeaponItemComponent\@\@QEBAXAEBVItemStackBase\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void appendFormattedHovertext(class ItemStackBase const&, std::string&, bool) const;
    /**
     * @symbol ?bindType\@WeaponItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@WeaponItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
    /**
     * @symbol ?hitActor\@WeaponItemComponent\@\@QEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    MCAPI void hitActor(class ItemStack&, class Actor&, class Mob&) const;
    /**
     * @symbol ?hitBlock\@WeaponItemComponent\@\@QEBAXAEAVItemStack\@\@AEBVBlock\@\@AEBVBlockPos\@\@AEAVMob\@\@\@Z
     */
    MCAPI void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;
    /**
     * @symbol ?hurtActor\@WeaponItemComponent\@\@QEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    MCAPI void hurtActor(class ItemStack&, class Actor&, class Mob&) const;
    // NOLINTEND
};
