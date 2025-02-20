#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Mob;
class Player;
struct Tick;
// clang-format on

class TradeInterestGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Player>> mPlayer;
    ::ll::TypedStorage<1, 1, bool>                  mIsRunning;
    ::ll::TypedStorage<1, 1, bool>                  mIsOnlyTargetItemFound;
    ::ll::TypedStorage<4, 4, float>                 mInterestDistance;
    ::ll::TypedStorage<8, 8, uint64>                mCurrentIndex;
    ::ll::TypedStorage<8, 152, ::ItemStack>         mCarriedItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>         mPlayerItem;
    ::ll::TypedStorage<8, 8, ::Tick>                mCarriedItemSwitchTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                mRemoveItemTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                mInterestTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                mInterestCooldown;
    ::ll::TypedStorage<8, 8, ::Tick const>          mInterestTimeMax;
    ::ll::TypedStorage<8, 8, ::Tick const>          mInterestTimeMaxHalf;
    ::ll::TypedStorage<8, 8, ::Tick const>          mRemoveTimeMax;
    ::ll::TypedStorage<8, 8, ::Tick const>          mCarriedSwitchMax;
    ::ll::TypedStorage<8, 8, ::Tick const>          mInterestCooldownMax;
    // NOLINTEND

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
    virtual ~TradeInterestGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TradeInterestGoal(
        ::Mob& mob,
        float  interestDistance,
        float  interestTime,
        float  removeTime,
        float  carriedTime,
        float  cooldown
    );

    MCAPI bool _isLookingAtMe(::Player const& target) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Mob& mob, float interestDistance, float interestTime, float removeTime, float carriedTime, float cooldown);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

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
