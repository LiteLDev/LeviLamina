/**
 * @file  TargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TargetGoal.
 *
 */
class TargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETGOAL
public:
    class TargetGoal& operator=(class TargetGoal const &) = delete;
    TargetGoal(class TargetGoal const &) = delete;
    TargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TargetGoal();
    /**
     * @hash   -332601497
     * @vftbl  1
     * @symbol  ?canUse\@WitherTargetHighestDamage\@\@UEAA_NXZ
     */
    virtual bool canUse() = 0;
    /**
     * @hash   -141833238
     * @vftbl  2
     * @symbol  ?canContinueToUse\@TargetGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   468968466
     * @vftbl  3
     * @symbol  ?isTargetGoal\@TargetGoal\@\@UEBA_NXZ
     */
    virtual bool isTargetGoal() const;
    /**
     * @hash   -1821299579
     * @vftbl  4
     * @symbol  ?start\@TargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1235527365
     * @vftbl  5
     * @symbol  ?stop\@TargetGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -2026771600
     * @vftbl  6
     * @symbol  ?tick\@TargetGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   710090500
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@TargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   1212314319
     * @vftbl  10
     * @symbol  ?_canAttack\@TargetGoal\@\@MEAA_NPEAVMob\@\@PEAVActor\@\@_N2PEAPEBUMobDescriptor\@\@\@Z
     */
    virtual bool _canAttack(class Mob *, class Actor *, bool, bool, struct MobDescriptor const **);
    /**
     * @hash   81146991
     * @symbol  ??0TargetGoal\@\@QEAA\@AEAVMob\@\@_NH1M1H\@Z
     */
    MCAPI TargetGoal(class Mob &, bool, int, bool, float, bool, int);
    /**
     * @hash   1638187370
     * @symbol  ??0TargetGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@UMobDescriptor\@\@V?$allocator\@UMobDescriptor\@\@\@std\@\@\@std\@\@_NH2M2H\@Z
     */
    MCAPI TargetGoal(class Mob &, std::vector<struct MobDescriptor> const &, bool, int, bool, float, bool, int);

//protected:
    /**
     * @hash   95335582
     * @symbol  ?_canAttack\@TargetGoal\@\@IEAA_NPEAVActor\@\@_NPEAPEBUMobDescriptor\@\@\@Z
     */
    MCAPI bool _canAttack(class Actor *, bool, struct MobDescriptor const **);
    /**
     * @hash   -1849624347
     * @symbol  ?_canReachAfterDelay\@TargetGoal\@\@IEAA_NAEAVActor\@\@\@Z
     */
    MCAPI bool _canReachAfterDelay(class Actor &);
    /**
     * @hash   1732591813
     * @symbol  ?_matchesTargetTypes\@TargetGoal\@\@IEAA_NPEAVMob\@\@PEAVActor\@\@_NPEAPEBUMobDescriptor\@\@\@Z
     */
    MCAPI bool _matchesTargetTypes(class Mob *, class Actor *, bool, struct MobDescriptor const **);
    /**
     * @hash   255014520
     * @symbol  ?_withinRange\@TargetGoal\@\@IEAA_NAEBVActor\@\@\@Z
     */
    MCAPI bool _withinRange(class Actor const &);

protected:

};