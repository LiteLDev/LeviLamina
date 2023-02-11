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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlanterItemComponent();
    /**
     * @hash   -25146385
     * @vftbl  1
     * @symbol  ?isNetworkComponent\@?$NetworkedItemComponent\@VPlanterItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @hash   -2014771679
     * @vftbl  3
     * @symbol  ?useOn\@PlanterItemComponent\@\@UEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   228823921
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@?$NetworkedItemComponent\@VPlanterItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   -1327309585
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@?$NetworkedItemComponent\@VPlanterItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1671985190
     * @symbol  ?calculatePlacePos\@PlanterItemComponent\@\@QEBA_NAEAVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    MCAPI bool calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /**
     * @hash   -340160365
     * @symbol  ?bindType\@PlanterItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1796525460
     * @symbol  ?getIdentifier\@PlanterItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};