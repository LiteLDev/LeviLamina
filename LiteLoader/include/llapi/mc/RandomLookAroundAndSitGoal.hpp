/**
 * @file  MC/RandomLookAroundAndSitGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomLookAroundAndSitGoal.
 *
 */
class RandomLookAroundAndSitGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMLOOKAROUNDANDSITGOAL
public:
    class RandomLookAroundAndSitGoal& operator=(class RandomLookAroundAndSitGoal const &) = delete;
    RandomLookAroundAndSitGoal(class RandomLookAroundAndSitGoal const &) = delete;
    RandomLookAroundAndSitGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RandomLookAroundAndSitGoal();
    /**
     * @hash   357762359
     * @vftbl  1
     * @symbol ?canUse@RandomLookAroundAndSitGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1558341957
     * @vftbl  2
     * @symbol ?canContinueToUse@RandomLookAroundAndSitGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -473193632
     * @vftbl  4
     * @symbol ?start@RandomLookAroundAndSitGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1501789392
     * @vftbl  5
     * @symbol ?stop@RandomLookAroundAndSitGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -246167877
     * @vftbl  6
     * @symbol ?tick@RandomLookAroundAndSitGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -1239544055
     * @vftbl  7
     * @symbol ?appendDebugInfo@RandomLookAroundAndSitGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1315083565
     * @symbol ??0RandomLookAroundAndSitGoal@@QEAA@AEAVMob@@HHHHM@Z
     */
    MCAPI RandomLookAroundAndSitGoal(class Mob &, int, int, int, int, float);

};