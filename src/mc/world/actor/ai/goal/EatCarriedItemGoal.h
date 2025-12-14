#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Mob;
// clang-format on

class EatCarriedItemGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>       mMob;
    ::ll::TypedStorage<8, 8, uint64 const> mStartDelay;
    ::ll::TypedStorage<8, 8, uint64>       mStartDelayCounter;
    // NOLINTEND

public:
    // prevent constructor by default
    EatCarriedItemGoal& operator=(EatCarriedItemGoal const&);
    EatCarriedItemGoal(EatCarriedItemGoal const&);
    EatCarriedItemGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~EatCarriedItemGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void _updateHand(::ItemStack const& item);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI bool $canContinueToUse();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
