#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ProjectileItemComponent {

public:
    // prevent constructor by default
    ProjectileItemComponent& operator=(ProjectileItemComponent const&) = delete;
    ProjectileItemComponent(ProjectileItemComponent const&)            = delete;
    ProjectileItemComponent()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?checkComponentDataForContentErrors\@ItemComponent\@\@UEBA_NXZ
     */
    virtual bool checkComponentDataForContentErrors() const;
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
     * @vftbl 6
     * @symbol ?handleVersionBasedInitialization\@ItemComponent\@\@UEAAXAEBVSemVersion\@\@\@Z
     */
    virtual void handleVersionBasedInitialization(class SemVersion const&);
    /**
     * @vftbl 7
     * @symbol ?initializeComponent\@ItemComponent\@\@UEBAXXZ
     */
    virtual void initializeComponent() const;
    /**
     * @vftbl 8
     * @symbol ?_canUseOn\@ItemComponent\@\@MEBA_NAEBVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, unsigned char) const;
    /**
     * @vftbl 9
     * @symbol ?_useOn\@ItemComponent\@\@MEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&) const;
    /**
     * @symbol ??0ProjectileItemComponent\@\@QEAA\@PEAVComponentItem\@\@W4ActorType\@\@M\@Z
     */
    MCAPI ProjectileItemComponent(class ComponentItem*, enum class ActorType, float);
    /**
     * @symbol ?dispense\@ProjectileItemComponent\@\@QEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    MCAPI bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
    /**
     * @symbol ?getShootDir\@ProjectileItemComponent\@\@QEBA?AVVec3\@\@AEBVPlayer\@\@M\@Z
     */
    MCAPI class Vec3 getShootDir(class Player const&, float) const;
    /**
     * @symbol
     * ?shootProjectile\@ProjectileItemComponent\@\@QEBAPEAVActor\@\@AEAVBlockSource\@\@AEBVVec3\@\@1MPEAVPlayer\@\@\@Z
     */
    MCAPI class Actor*
    shootProjectile(class BlockSource&, class Vec3 const&, class Vec3 const&, float, class Player*) const;
    /**
     * @symbol ?bindType\@ProjectileItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@ProjectileItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
    // NOLINTEND
};
