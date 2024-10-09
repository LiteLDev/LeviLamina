#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
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
    // vIndex: 0
    virtual ~DrinkPotionGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI DrinkPotionGoal(
        class Mob&                                 mob,
        float                                      walkSpeedModifier,
        std::vector<struct DrinkPotionData> const& drinkPotionData
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class mce::UUID const SPEED_MODIFIER_DRINKING_UUID;

    MCAPI static int const THROTTLE_COOLDOWN;

    // NOLINTEND
};
