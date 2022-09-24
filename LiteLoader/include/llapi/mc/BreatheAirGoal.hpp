/**
 * @file  BreatheAirGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreatheAirGoal.
 *
 */
class BreatheAirGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREATHEAIRGOAL
public:
    class BreatheAirGoal& operator=(class BreatheAirGoal const &) = delete;
    BreatheAirGoal(class BreatheAirGoal const &) = delete;
    BreatheAirGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BreatheAirGoal();
    /**
     * @hash   -2019340904
     * @vftbl  1
     * @symbol ?canUse@BreatheAirGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1961653818
     * @vftbl  2
     * @symbol ?canContinueToUse@BreatheAirGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   23910320
     * @vftbl  3
     * @symbol ?canBeInterrupted@BreatheAirGoal@@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @hash   -571620223
     * @vftbl  4
     * @symbol ?start@BreatheAirGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   477391756
     * @vftbl  6
     * @symbol ?tick@BreatheAirGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1186104248
     * @vftbl  7
     * @symbol ?appendDebugInfo@BreatheAirGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1526801093
     * @symbol ??0BreatheAirGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI BreatheAirGoal(class Mob &);

//private:
    /**
     * @hash   -1773192020
     * @symbol ?_determineApproximateDepth@BreatheAirGoal@@AEAAHXZ
     */
    MCAPI int _determineApproximateDepth();
    /**
     * @hash   827889263
     * @symbol ?_findAirPosition@BreatheAirGoal@@AEAAXXZ
     */
    MCAPI void _findAirPosition();

private:

};