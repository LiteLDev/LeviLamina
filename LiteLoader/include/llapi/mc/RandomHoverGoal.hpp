/**
 * @file  RandomHoverGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomHoverGoal.
 *
 */
class RandomHoverGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMHOVERGOAL
public:
    class RandomHoverGoal& operator=(class RandomHoverGoal const &) = delete;
    RandomHoverGoal(class RandomHoverGoal const &) = delete;
    RandomHoverGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RandomHoverGoal();
    /**
     * @hash   -1450071308
     * @vftbl  1
     * @symbol ?canUse@RandomHoverGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -709224798
     * @vftbl  2
     * @symbol ?canContinueToUse@RandomHoverGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -2135727587
     * @vftbl  4
     * @symbol ?start@RandomHoverGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -1407844664
     * @vftbl  6
     * @symbol ?tick@RandomHoverGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1455818892
     * @vftbl  7
     * @symbol ?appendDebugInfo@RandomHoverGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -330845299
     * @symbol ??0RandomHoverGoal@@QEAA@AEAVMob@@MHMMMUIntRange@@@Z
     */
    MCAPI RandomHoverGoal(class Mob &, float, int, float, float, float, struct IntRange);

//protected:
    /**
     * @hash   -522060534
     * @symbol ?_computeNewTarget@RandomHoverGoal@@IEAA_NXZ
     */
    MCAPI bool _computeNewTarget();
    /**
     * @hash   1472404272
     * @symbol ?_mobMeetsPreconditions@RandomHoverGoal@@IEBA_NXZ
     */
    MCAPI bool _mobMeetsPreconditions() const;
    /**
     * @hash   -102882045
     * @symbol ?_moveToTarget@RandomHoverGoal@@IEAAXXZ
     */
    MCAPI void _moveToTarget();

protected:

};