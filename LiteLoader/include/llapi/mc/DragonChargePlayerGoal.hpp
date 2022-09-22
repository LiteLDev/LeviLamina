/**
 * @file  DragonChargePlayerGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonChargePlayerGoal.
 *
 */
class DragonChargePlayerGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONCHARGEPLAYERGOAL
public:
    class DragonChargePlayerGoal& operator=(class DragonChargePlayerGoal const &) = delete;
    DragonChargePlayerGoal(class DragonChargePlayerGoal const &) = delete;
    DragonChargePlayerGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DragonChargePlayerGoal();
    /**
     * @hash   -674994651
     * @vftbl  1
     * @symbol ?canUse@DragonChargePlayerGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   2028171795
     * @vftbl  2
     * @symbol ?canContinueToUse@DragonChargePlayerGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   521763838
     * @vftbl  4
     * @symbol ?start@DragonChargePlayerGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1176163314
     * @vftbl  5
     * @symbol ?stop@DragonChargePlayerGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1903801367
     * @vftbl  6
     * @symbol ?tick@DragonChargePlayerGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -493453141
     * @vftbl  7
     * @symbol ?appendDebugInfo@DragonChargePlayerGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   473877938
     * @symbol ??0DragonChargePlayerGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI DragonChargePlayerGoal(class Mob &);

};