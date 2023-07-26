#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlanterItemComponent {

public:
    // prevent constructor by default
    PlanterItemComponent& operator=(PlanterItemComponent const&) = delete;
    PlanterItemComponent(PlanterItemComponent const&)            = delete;
    PlanterItemComponent()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VPlanterItemComponent\@\@\@\@UEBA_NXZ
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
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VPlanterItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?initializeFromNetwork\@?$NetworkedItemComponent\@VPlanterItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7(); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?_canUseOn\@PlanterItemComponent\@\@MEBA_NAEBVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?_useOn\@PlanterItemComponent\@\@MEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool
    _useOn(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ??0PlanterItemComponent\@\@QEAA\@PEAVComponentItem\@\@AEBVBlock\@\@\@Z
     */
    MCAPI PlanterItemComponent(class ComponentItem*, class Block const&); // NOLINT
    /**
     * @symbol
     * ?calculatePlacePos\@PlanterItemComponent\@\@QEBA_NAEBVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    MCAPI bool
    calculatePlacePos(class ItemStackBase const&, class Actor&, unsigned char&, class BlockPos&) const; // NOLINT
    /**
     * @symbol ?bindType\@PlanterItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?getIdentifier\@PlanterItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_placeBlock\@PlanterItemComponent\@\@AEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _placeBlock(class ItemStack&, class Actor&, class Block const&, class BlockPos const&) const; // NOLINT

private:
};
