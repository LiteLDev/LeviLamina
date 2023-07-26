/**
 * @file  DrinkPotionGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~DrinkPotionGoal();
    /**
     * @vftbl  1
     * @symbol  ?canUse\@DrinkPotionGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol  ?canContinueToUse\@DrinkPotionGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?start\@DrinkPotionGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol  ?stop\@DrinkPotionGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  ?tick\@DrinkPotionGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@DrinkPotionGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol  ??0DrinkPotionGoal\@\@QEAA\@AEAVMob\@\@MAEBV?$vector\@UDrinkPotionData\@\@V?$allocator\@UDrinkPotionData\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI DrinkPotionGoal(class Mob &, float, std::vector<struct DrinkPotionData> const &);

//private:

private:
    /**
     * @symbol  ?SPEED_MODIFIER_DRINKING_UUID\@DrinkPotionGoal\@\@0VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const SPEED_MODIFIER_DRINKING_UUID;
    /**
     * @symbol  ?THROTTLE_COOLDOWN\@DrinkPotionGoal\@\@0HB
     */
    MCAPI static int const THROTTLE_COOLDOWN;

};