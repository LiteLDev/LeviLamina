/**
 * @file  MC/VillagerCelebrationGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VillagerCelebrationGoal.
 *
 */
class VillagerCelebrationGoal {

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
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~VillagerCelebrationGoal();
    /**
     * @hash   -1796799495
     * @vftbl  1
     * @symbol ?canUse@VillagerCelebrationGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1909878567
     * @vftbl  2
     * @symbol ?canContinueToUse@VillagerCelebrationGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -808149038
     * @vftbl  4
     * @symbol ?start@VillagerCelebrationGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1268532142
     * @vftbl  5
     * @symbol ?stop@VillagerCelebrationGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -424280579
     * @vftbl  6
     * @symbol ?tick@VillagerCelebrationGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -554060345
     * @vftbl  7
     * @symbol ?appendDebugInfo@VillagerCelebrationGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1886985686
     * @symbol ??0VillagerCelebrationGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI VillagerCelebrationGoal(class Mob &);

//private:
    /**
     * @hash   -1282536722
     * @symbol ?_launchFirework@VillagerCelebrationGoal@@AEAAXXZ
     */
    MCAPI void _launchFirework();
    /**
     * @hash   1315090863
     * @symbol ?_setNextFireworkTick@VillagerCelebrationGoal@@AEAAXXZ
     */
    MCAPI void _setNextFireworkTick();

private:

};