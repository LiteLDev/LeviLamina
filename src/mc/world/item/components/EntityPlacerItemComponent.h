#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityPlacerItemComponent {

public:
    // prevent constructor by default
    EntityPlacerItemComponent& operator=(EntityPlacerItemComponent const&) = delete;
    EntityPlacerItemComponent(EntityPlacerItemComponent const&)            = delete;
    EntityPlacerItemComponent()                                            = delete;

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
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VEntityPlacerItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?initializeFromNetwork\@?$NetworkedItemComponent\@VEntityPlacerItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?handleVersionBasedInitialization\@EntityPlacerItemComponent\@\@UEAAXAEBVSemVersion\@\@\@Z
     */
    virtual void handleVersionBasedInitialization(class SemVersion const&); // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7(); // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?_useOn\@EntityPlacerItemComponent\@\@MEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool
    _useOn(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYPLACERITEMCOMPONENT
    /**
     * @symbol ?_canUseOn\@EntityPlacerItemComponent\@\@MEBA_NAEBVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@E\@Z
     */
    MCVAPI bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, unsigned char) const; // NOLINT
#endif
    /**
     * @symbol ?dispense\@EntityPlacerItemComponent\@\@QEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    MCAPI bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const; // NOLINT
    /**
     * @symbol ?bindType\@EntityPlacerItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?getIdentifier\@EntityPlacerItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier(); // NOLINT

    // private:
    /**
     * @symbol ?_setActorCustomName\@EntityPlacerItemComponent\@\@AEBAXAEAVActor\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void _setActorCustomName(class Actor&, class ItemStack const&) const; // NOLINT

private:
};
