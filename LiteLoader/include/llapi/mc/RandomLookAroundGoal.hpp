/**
 * @file  RandomLookAroundGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomLookAroundGoal.
 *
 */
class RandomLookAroundGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMLOOKAROUNDGOAL
public:
    class RandomLookAroundGoal& operator=(class RandomLookAroundGoal const &) = delete;
    RandomLookAroundGoal(class RandomLookAroundGoal const &) = delete;
    RandomLookAroundGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RandomLookAroundGoal();
    /**
     * @hash   1316680046
     * @vftbl  1
     * @symbol ?canUse@RandomLookAroundGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   415856060
     * @vftbl  2
     * @symbol ?canContinueToUse@RandomLookAroundGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   920736071
     * @vftbl  4
     * @symbol ?start@RandomLookAroundGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   770260194
     * @vftbl  6
     * @symbol ?tick@RandomLookAroundGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1228307282
     * @vftbl  7
     * @symbol ?appendDebugInfo@RandomLookAroundGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -2147045258
     * @symbol ??0RandomLookAroundGoal@@QEAA@AEAVMob@@HHM@Z
     */
    MCAPI RandomLookAroundGoal(class Mob &, int, int, float);

};