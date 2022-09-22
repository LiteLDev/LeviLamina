/**
 * @file  SwimWithEntityGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SwimWithEntityGoal.
 *
 */
class SwimWithEntityGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMWITHENTITYGOAL
public:
    class SwimWithEntityGoal& operator=(class SwimWithEntityGoal const &) = delete;
    SwimWithEntityGoal(class SwimWithEntityGoal const &) = delete;
    SwimWithEntityGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SwimWithEntityGoal();
    /**
     * @hash   1949451180
     * @vftbl  1
     * @symbol ?canUse@SwimWithEntityGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -68293974
     * @vftbl  2
     * @symbol ?canContinueToUse@SwimWithEntityGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   1028626628
     * @vftbl  3
     * @symbol ?canBeInterrupted@SwimWithEntityGoal@@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @hash   968614917
     * @vftbl  4
     * @symbol ?start@SwimWithEntityGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1609869125
     * @vftbl  5
     * @symbol ?stop@SwimWithEntityGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   47153904
     * @vftbl  6
     * @symbol ?tick@SwimWithEntityGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   895153828
     * @vftbl  7
     * @symbol ?appendDebugInfo@SwimWithEntityGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1983245433
     * @symbol ??0SwimWithEntityGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI SwimWithEntityGoal(class Mob &);

//private:
    /**
     * @hash   2026835424
     * @symbol ?_setWantedMob@SwimWithEntityGoal@@AEAA_NXZ
     */
    MCAPI bool _setWantedMob();

private:

};