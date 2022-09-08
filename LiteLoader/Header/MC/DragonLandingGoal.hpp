/**
 * @file  DragonLandingGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonLandingGoal.
 *
 */
class DragonLandingGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONLANDINGGOAL
public:
    class DragonLandingGoal& operator=(class DragonLandingGoal const &) = delete;
    DragonLandingGoal(class DragonLandingGoal const &) = delete;
    DragonLandingGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   351512069
     */
    virtual ~DragonLandingGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@DragonLandingGoal@@UEAA_NXZ
     * @hash   -2124379927
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@DragonLandingGoal@@UEAA_NXZ
     * @hash   2000642087
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@DragonLandingGoal@@UEAAXXZ
     * @hash   -1580126958
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@DragonLandingGoal@@UEAAXXZ
     * @hash   1626422658
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@DragonLandingGoal@@UEAAXXZ
     * @hash   -1553966435
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@DragonLandingGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1869242233
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0DragonLandingGoal@@QEAA@AEAVEnderDragon@@@Z
     * @hash   -244338496
     */
    MCAPI DragonLandingGoal(class EnderDragon &);

//private:
    /**
     * @symbol ?findNewTarget@DragonLandingGoal@@AEAAXXZ
     * @hash   2022571597
     */
    MCAPI void findNewTarget();

private:

};