/**
 * @file  MC/StalkAndPounceOnTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StalkAndPounceOnTargetGoal.
 *
 */
class StalkAndPounceOnTargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STALKANDPOUNCEONTARGETGOAL
public:
    class StalkAndPounceOnTargetGoal& operator=(class StalkAndPounceOnTargetGoal const &) = delete;
    StalkAndPounceOnTargetGoal(class StalkAndPounceOnTargetGoal const &) = delete;
    StalkAndPounceOnTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StalkAndPounceOnTargetGoal();
    /**
     * @hash   1775668091
     * @vftbl  1
     * @symbol ?canUse@StalkAndPounceOnTargetGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1318781111
     * @vftbl  2
     * @symbol ?canContinueToUse@StalkAndPounceOnTargetGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   -102228925
     * @vftbl  3
     * @symbol ?canBeInterrupted@StalkAndPounceOnTargetGoal@@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @hash   1249682260
     * @vftbl  4
     * @symbol ?start@StalkAndPounceOnTargetGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   221132628
     * @vftbl  5
     * @symbol ?stop@StalkAndPounceOnTargetGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1476831023
     * @vftbl  6
     * @symbol ?tick@StalkAndPounceOnTargetGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1471610427
     * @vftbl  7
     * @symbol ?appendDebugInfo@StalkAndPounceOnTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1217599068
     * @symbol ??0StalkAndPounceOnTargetGoal@@QEAA@AEAVMob@@AEBVActorFilterGroup@@MMMMMMMM_N@Z
     */
    MCAPI StalkAndPounceOnTargetGoal(class Mob &, class ActorFilterGroup const &, float, float, float, float, float, float, float, float, bool);

//private:
    /**
     * @hash   1079405600
     * @symbol ?_isStuckBlock@StalkAndPounceOnTargetGoal@@AEBA_NVBlockPos@@@Z
     */
    MCAPI bool _isStuckBlock(class BlockPos) const;
    /**
     * @hash   -2127101911
     * @symbol ?_preparePounce@StalkAndPounceOnTargetGoal@@AEAAXAEBVVec3@@0@Z
     */
    MCAPI void _preparePounce(class Vec3 const &, class Vec3 const &);

private:

};