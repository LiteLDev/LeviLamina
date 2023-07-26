#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThrowableItemComponent {

public:
    // prevent constructor by default
    ThrowableItemComponent& operator=(ThrowableItemComponent const&) = delete;
    ThrowableItemComponent(ThrowableItemComponent const&)            = delete;
    ThrowableItemComponent()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VThrowableItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VThrowableItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?initializeFromNetwork\@?$NetworkedItemComponent\@VThrowableItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?handleVersionBasedInitialization\@ThrowableItemComponent\@\@UEAAXAEBVSemVersion\@\@\@Z
     */
    virtual void handleVersionBasedInitialization(class SemVersion const&); // NOLINT
    /**
     * @symbol ??0ThrowableItemComponent\@\@QEAA\@PEAVComponentItem\@\@_N\@Z
     */
    MCAPI ThrowableItemComponent(class ComponentItem*, bool); // NOLINT
    /**
     * @symbol ?releaseUsing\@ThrowableItemComponent\@\@QEBA_NAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    MCAPI bool releaseUsing(class ItemStack&, class Player*, int) const; // NOLINT
    /**
     * @symbol ?use\@ThrowableItemComponent\@\@QEBA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool use(class ItemStack&, class Player&) const; // NOLINT
    /**
     * @symbol ?bindType\@ThrowableItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?getIdentifier\@ThrowableItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_doThrow\@ThrowableItemComponent\@\@AEBAXAEAVItemStack\@\@AEAVPlayer\@\@AEBVProjectileItemComponent\@\@M\@Z
     */
    MCAPI void _doThrow(class ItemStack&, class Player&, class ProjectileItemComponent const&, float) const; // NOLINT
    /**
     * @symbol ?_getLaunchPower\@ThrowableItemComponent\@\@AEBAMHHH\@Z
     */
    MCAPI float _getLaunchPower(int, int, int) const; // NOLINT

private:
};
