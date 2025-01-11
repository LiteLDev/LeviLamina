#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct DrinkPotionData;
namespace mce { class UUID; }
// clang-format on

class DrinkPotionGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5618a9;
    ::ll::UntypedStorage<4, 4>  mUnk56471b;
    ::ll::UntypedStorage<8, 24> mUnk329990;
    ::ll::UntypedStorage<4, 4>  mUnkf8766b;
    ::ll::UntypedStorage<8, 8>  mUnka8d295;
    ::ll::UntypedStorage<8, 80> mUnk8cd484;
    // NOLINTEND

public:
    // prevent constructor by default
    DrinkPotionGoal& operator=(DrinkPotionGoal const&);
    DrinkPotionGoal(DrinkPotionGoal const&);
    DrinkPotionGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~DrinkPotionGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DrinkPotionGoal(::Mob& mob, float walkSpeedModifier, ::std::vector<::DrinkPotionData> const& drinkPotionData);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& SPEED_MODIFIER_DRINKING_UUID();

    MCAPI static int const& THROTTLE_COOLDOWN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, float walkSpeedModifier, ::std::vector<::DrinkPotionData> const& drinkPotionData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCFOLD void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
