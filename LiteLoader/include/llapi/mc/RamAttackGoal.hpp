/**
 * @file  RamAttackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RamAttackGoal.
 *
 */
class RamAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAMATTACKGOAL
public:
    class RamAttackGoal& operator=(class RamAttackGoal const &) = delete;
    RamAttackGoal(class RamAttackGoal const &) = delete;
    RamAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RamAttackGoal();
    /**
     * @hash   404187991
     * @vftbl  1
     * @symbol  ?canUse\@RamAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1271090917
     * @vftbl  2
     * @symbol  ?canContinueToUse\@RamAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1629525456
     * @vftbl  4
     * @symbol  ?start\@RamAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -2025081040
     * @vftbl  5
     * @symbol  ?stop\@RamAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1785533579
     * @vftbl  6
     * @symbol  ?tick\@RamAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1849783655
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@RamAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -284777708
     * @symbol  ??0RamAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI RamAttackGoal(class Mob &);

//protected:
    /**
     * @hash   1867668482
     * @symbol  ?_initiateRamAttack\@RamAttackGoal\@\@IEAA_NXZ
     */
    MCAPI bool _initiateRamAttack();

//private:
    /**
     * @hash   245534049
     * @symbol  ?_hasChargePath\@RamAttackGoal\@\@AEAA_NXZ
     */
    MCAPI bool _hasChargePath();
    /**
     * @hash   -46393698
     * @symbol  ?_pathablePos\@RamAttackGoal\@\@AEAA_NAEBVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI bool _pathablePos(class BlockSource const &, class BlockPos);
    /**
     * @hash   -1331036610
     * @symbol  ?_resetCooldown\@RamAttackGoal\@\@AEAAXXZ
     */
    MCAPI void _resetCooldown();
    /**
     * @hash   86389267
     * @symbol  ?_tryKnockbackTarget\@RamAttackGoal\@\@AEAAXXZ
     */
    MCAPI void _tryKnockbackTarget();
    /**
     * @hash   1439449367
     * @symbol  ?_verifyTargetStillInPositionAndPrepareForRamAttack\@RamAttackGoal\@\@AEAA_NXZ
     */
    MCAPI bool _verifyTargetStillInPositionAndPrepareForRamAttack();

protected:

private:

};