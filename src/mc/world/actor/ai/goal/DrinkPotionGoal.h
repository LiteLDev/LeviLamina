#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class DrinkPotionGoal : public ::Goal {
public:
    // prevent constructor by default
    DrinkPotionGoal& operator=(DrinkPotionGoal const&);
    DrinkPotionGoal(DrinkPotionGoal const&);
    DrinkPotionGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DrinkPotionGoal@@UEAA@XZ
    virtual ~DrinkPotionGoal() = default;

    // vIndex: 1, symbol: ?canUse@DrinkPotionGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@DrinkPotionGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@DrinkPotionGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@DrinkPotionGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@DrinkPotionGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@DrinkPotionGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol:
    // ??0DrinkPotionGoal@@QEAA@AEAVMob@@MAEBV?$vector@UDrinkPotionData@@V?$allocator@UDrinkPotionData@@@std@@@std@@@Z
    MCAPI DrinkPotionGoal(
        class Mob&                                 mob,
        float                                      walkSpeedModifier,
        std::vector<struct DrinkPotionData> const& drinkPotionData
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?SPEED_MODIFIER_DRINKING_UUID@DrinkPotionGoal@@0VUUID@mce@@B
    MCAPI static class mce::UUID const SPEED_MODIFIER_DRINKING_UUID;

    // symbol: ?THROTTLE_COOLDOWN@DrinkPotionGoal@@0HB
    MCAPI static int const THROTTLE_COOLDOWN;

    // NOLINTEND
};
