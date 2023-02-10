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
     * @hash   510543977
     * @vftbl  1
     * @symbol  ?canUse\@PickupItemsGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1251144471
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
     * @hash   -516095966
     * @vftbl  4
     * @symbol  ?start\@PickupItemsGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   373286018
     * @vftbl  5
     * @symbol  ?stop\@PickupItemsGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   212401997
     * @vftbl  6
     * @symbol  ?tick\@PickupItemsGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1852709815
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@PickupItemsGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1466413985
     * @symbol  ??0PickupItemsGoal\@\@QEAA\@AEAVMob\@\@M_NHHM11H11AEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PickupItemsGoal(class Mob &, float, bool, int, int, float, bool, bool, int, bool, bool, std::vector<class ItemDescriptor> const &);

//private:
    /**
     * @hash   -828025875
     * @symbol  ?_dropItem\@PickupItemsGoal\@\@AEBAXAEBVItemStack\@\@\@Z
     */
    MCAPI void _dropItem(class ItemStack const &) const;
    /**
     * @hash   -999223923
     * @symbol  ?_filterValidTargets\@PickupItemsGoal\@\@AEBA?AV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@AEBV?$vector\@UDistanceSortedActor\@\@V?$allocator\@UDistanceSortedActor\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI std::vector<class WeakEntityRef> _filterValidTargets(std::vector<struct DistanceSortedActor> const &) const;
    /**
     * @hash   607939172
     * @symbol  ?_getShareableItem\@PickupItemsGoal\@\@AEBAPEBUShareable\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI struct Shareable const * _getShareableItem(class ItemStack const &) const;
    /**
     * @hash   -1609024296
     * @symbol  ?_hasRoomForCarriedItem\@PickupItemsGoal\@\@AEBA_NXZ
     */
    MCAPI bool _hasRoomForCarriedItem() const;
    /**
     * @hash   2104766851
     * @symbol  ?_pickItemUp\@PickupItemsGoal\@\@AEAAXPEAVItemActor\@\@\@Z
     */
    MCAPI void _pickItemUp(class ItemActor *);

private:

};