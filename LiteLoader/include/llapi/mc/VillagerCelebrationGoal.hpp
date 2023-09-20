/**
 * @file  VillagerCelebrationGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Goal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VillagerCelebrationGoal.
 *
 */
class VillagerCelebrationGoal : public Goal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERCELEBRATIONGOAL
public:
    class VillagerCelebrationGoal& operator=(class VillagerCelebrationGoal const &) = delete;
    VillagerCelebrationGoal(class VillagerCelebrationGoal const &) = delete;
    VillagerCelebrationGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@VillagerCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@VillagerCelebrationGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@VillagerCelebrationGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@VillagerCelebrationGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@VillagerCelebrationGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@VillagerCelebrationGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;

//private:
    /**
     * @symbol ?_launchFirework\@VillagerCelebrationGoal\@\@AEAAXXZ
     */
    MCAPI void _launchFirework();
    /**
     * @symbol ?_setNextFireworkTick\@VillagerCelebrationGoal\@\@AEAAXXZ
     */
    MCAPI void _setNextFireworkTick();

private:

};
