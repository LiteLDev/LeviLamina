/**
 * @file  MC/RandomStrollGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomStrollGoal.
 *
 */
class RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSTROLLGOAL
public:
    class RandomStrollGoal& operator=(class RandomStrollGoal const &) = delete;
    RandomStrollGoal(class RandomStrollGoal const &) = delete;
    RandomStrollGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RandomStrollGoal();
    /**
     * @hash   1300591708
     * @vftbl  1
     * @symbol ?canUse@RandomStrollGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1744574634
     * @vftbl  2
     * @symbol ?canContinueToUse@RandomStrollGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   -1850745388
     * @vftbl  3
     * @symbol ?canBeInterrupted@RandomBreachingGoal@@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @hash   841920597
     * @vftbl  4
     * @symbol ?start@RandomStrollGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1014827947
     * @vftbl  5
     * @symbol ?stop@RandomStrollGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   205875200
     * @vftbl  6
     * @symbol ?tick@RandomStrollGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   467214500
     * @vftbl  7
     * @symbol ?appendDebugInfo@RandomStrollGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   16008073
     * @vftbl  10
     * @symbol ?_setWantedPosition@RandomStrollGoal@@MEAA_NXZ
     */
    virtual bool _setWantedPosition();
    /**
     * @hash   2008957467
     * @symbol ??0RandomStrollGoal@@QEAA@AEAVMob@@MHHH@Z
     */
    MCAPI RandomStrollGoal(class Mob &, float, int, int, int);

};