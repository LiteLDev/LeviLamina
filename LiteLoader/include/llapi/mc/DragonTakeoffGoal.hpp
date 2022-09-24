/**
 * @file  DragonTakeoffGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonTakeoffGoal.
 *
 */
class DragonTakeoffGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONTAKEOFFGOAL
public:
    class DragonTakeoffGoal& operator=(class DragonTakeoffGoal const &) = delete;
    DragonTakeoffGoal(class DragonTakeoffGoal const &) = delete;
    DragonTakeoffGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DragonTakeoffGoal();
    /**
     * @hash   658275784
     * @vftbl  1
     * @symbol ?canUse@DragonTakeoffGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   488345878
     * @vftbl  2
     * @symbol ?canContinueToUse@DragonTakeoffGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1596546591
     * @vftbl  4
     * @symbol ?start@DragonTakeoffGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1609972273
     * @vftbl  5
     * @symbol ?stop@DragonTakeoffGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -1570416820
     * @vftbl  6
     * @symbol ?tick@DragonTakeoffGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   632824824
     * @vftbl  7
     * @symbol ?appendDebugInfo@DragonTakeoffGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   77121183
     * @symbol ??0DragonTakeoffGoal@@QEAA@AEAVEnderDragon@@@Z
     */
    MCAPI DragonTakeoffGoal(class EnderDragon &);

//private:
    /**
     * @hash   661080429
     * @symbol ?_findNewTarget@DragonTakeoffGoal@@AEAAXXZ
     */
    MCAPI void _findNewTarget();

private:

};