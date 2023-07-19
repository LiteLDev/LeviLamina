/**
 * @file  PlanterItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlanterItemComponent.
 *
 */
class PlanterItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLANTERITEMCOMPONENT
public:
    class PlanterItemComponent& operator=(class PlanterItemComponent const &) = delete;
    PlanterItemComponent(class PlanterItemComponent const &) = delete;
    PlanterItemComponent() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VPlanterItemComponent\@\@\@\@UEBA_NXZ
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
     * @symbol ?buildNetworkTag\@?$NetworkedItemComponent\@VPlanterItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol ?initializeFromNetwork\@?$NetworkedItemComponent\@VPlanterItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol ?_canUseOn\@PlanterItemComponent\@\@MEBA_NAEBVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool _canUseOn(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl 9
     * @symbol ?_useOn\@PlanterItemComponent\@\@MEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
    /**
     * @symbol ??0PlanterItemComponent\@\@QEAA\@PEAVComponentItem\@\@AEBVBlock\@\@\@Z
     */
    MCAPI PlanterItemComponent(class ComponentItem *, class Block const &);
    /**
     * @symbol ?calculatePlacePos\@PlanterItemComponent\@\@QEBA_NAEBVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    MCAPI bool calculatePlacePos(class ItemStackBase const &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @symbol ?bindType\@PlanterItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@PlanterItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

//private:
    /**
     * @symbol ?_placeBlock\@PlanterItemComponent\@\@AEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _placeBlock(class ItemStack &, class Actor &, class Block const &, class BlockPos const &) const;

private:

};
