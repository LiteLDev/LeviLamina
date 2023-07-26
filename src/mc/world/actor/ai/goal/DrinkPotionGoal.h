#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class DrinkPotionGoal {

public:
    // prevent constructor by default
    DrinkPotionGoal& operator=(DrinkPotionGoal const&) = delete;
    DrinkPotionGoal(DrinkPotionGoal const&)            = delete;
    DrinkPotionGoal()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@DrinkPotionGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@DrinkPotionGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@DrinkPotionGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@DrinkPotionGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@DrinkPotionGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@DrinkPotionGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol
     * ??0DrinkPotionGoal\@\@QEAA\@AEAVMob\@\@MAEBV?$vector\@UDrinkPotionData\@\@V?$allocator\@UDrinkPotionData\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI DrinkPotionGoal(class Mob&, float, std::vector<struct DrinkPotionData> const&); // NOLINT

    // private:

private:
    /**
     * @symbol ?SPEED_MODIFIER_DRINKING_UUID\@DrinkPotionGoal\@\@0VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const SPEED_MODIFIER_DRINKING_UUID; // NOLINT
    /**
     * @symbol ?THROTTLE_COOLDOWN\@DrinkPotionGoal\@\@0HB
     */
    MCAPI static int const THROTTLE_COOLDOWN; // NOLINT
};
