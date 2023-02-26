/**
 * @file  PickupItemsGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PickupItemsGoal.
 *
 */
class PickupItemsGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PICKUPITEMSGOAL
public:
    class PickupItemsGoal& operator=(class PickupItemsGoal const &) = delete;
    PickupItemsGoal(class PickupItemsGoal const &) = delete;
    PickupItemsGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PickupItemsGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@PickupItemsGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@PickupItemsGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@PickupItemsGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@PickupItemsGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@PickupItemsGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@PickupItemsGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0PickupItemsGoal\@\@QEAA\@AEAVMob\@\@M_NHHM11H11AEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PickupItemsGoal(class Mob &, float, bool, int, int, float, bool, bool, int, bool, bool, std::vector<class ItemDescriptor> const &);

//private:
    /**
     * @symbol  ?_dropItem\@PickupItemsGoal\@\@AEBAXAEBVItemStack\@\@\@Z
     */
    MCAPI void _dropItem(class ItemStack const &) const;
    /**
     * @symbol  ?_filterValidTargets\@PickupItemsGoal\@\@AEBA?AV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@AEBV?$vector\@UDistanceSortedActor\@\@V?$allocator\@UDistanceSortedActor\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::vector<class WeakEntityRef> _filterValidTargets(std::vector<struct DistanceSortedActor> const &) const;
    /**
     * @symbol  ?_getShareableItem\@PickupItemsGoal\@\@AEBAPEBUShareable\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI struct Shareable const * _getShareableItem(class ItemStack const &) const;
    /**
     * @symbol  ?_hasRoomForCarriedItem\@PickupItemsGoal\@\@AEBA_NXZ
     */
    MCAPI bool _hasRoomForCarriedItem() const;
    /**
     * @symbol  ?_pickItemUp\@PickupItemsGoal\@\@AEAAXPEAVItemActor\@\@\@Z
     */
    MCAPI void _pickItemUp(class ItemActor *);

private:

};