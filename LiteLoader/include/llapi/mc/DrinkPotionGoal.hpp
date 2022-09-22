/**
 * @file  DrinkPotionGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DrinkPotionGoal.
 *
 */
class DrinkPotionGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRINKPOTIONGOAL
public:
    class DrinkPotionGoal& operator=(class DrinkPotionGoal const &) = delete;
    DrinkPotionGoal(class DrinkPotionGoal const &) = delete;
    DrinkPotionGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DrinkPotionGoal();
    /**
     * @hash   1561798274
     * @vftbl  1
     * @symbol ?canUse@DrinkPotionGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1992291760
     * @vftbl  2
     * @symbol ?canContinueToUse@DrinkPotionGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -295076693
     * @vftbl  4
     * @symbol ?start@DrinkPotionGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   2055062235
     * @vftbl  5
     * @symbol ?stop@DrinkPotionGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   1893732310
     * @vftbl  6
     * @symbol ?tick@DrinkPotionGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -848599650
     * @vftbl  7
     * @symbol ?appendDebugInfo@DrinkPotionGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   529322755
     * @symbol ??0DrinkPotionGoal@@QEAA@AEAVMob@@MAEBV?$vector@UDrinkPotionData@@V?$allocator@UDrinkPotionData@@@std@@@std@@@Z
     */
    MCAPI DrinkPotionGoal(class Mob &, float, std::vector<struct DrinkPotionData> const &);

//private:

private:
    /**
     * @hash   -184042340
     * @symbol ?SPEED_MODIFIER_DRINKING_UUID@DrinkPotionGoal@@0VUUID@mce@@B
     */
    MCAPI static class mce::UUID const SPEED_MODIFIER_DRINKING_UUID;
    /**
     * @hash   1343222346
     * @symbol ?THROTTLE_COOLDOWN@DrinkPotionGoal@@0HB
     */
    MCAPI static int const THROTTLE_COOLDOWN;

};