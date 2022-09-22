/**
 * @file  RollGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RollGoal.
 *
 */
class RollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROLLGOAL
public:
    class RollGoal& operator=(class RollGoal const &) = delete;
    RollGoal(class RollGoal const &) = delete;
    RollGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RollGoal();
    /**
     * @hash   278943792
     * @vftbl  1
     * @symbol ?canUse@RollGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1634271122
     * @vftbl  2
     * @symbol ?canContinueToUse@RollGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   -971912296
     * @vftbl  3
     * @symbol ?canBeInterrupted@RollGoal@@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @hash   -17559671
     * @vftbl  4
     * @symbol ?start@RollGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   2115630841
     * @vftbl  5
     * @symbol ?stop@RollGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   209539716
     * @vftbl  6
     * @symbol ?tick@RollGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -837869344
     * @vftbl  7
     * @symbol ?appendDebugInfo@RollGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1477240852
     * @symbol ??0RollGoal@@QEAA@AEAVMob@@M@Z
     */
    MCAPI RollGoal(class Mob &, float);

//private:
    /**
     * @hash   1427344317
     * @symbol ?_handleRoll@RollGoal@@AEBAXHAEAVVec3@@AEAM1@Z
     */
    MCAPI void _handleRoll(int, class Vec3 &, float &, float &) const;

private:

};