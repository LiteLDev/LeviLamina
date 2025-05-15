#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Player;
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
    // prevent constructor by default
    TradeInterestGoal& operator=(TradeInterestGoal const&);
    TradeInterestGoal(TradeInterestGoal const&);
    TradeInterestGoal();

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
    MCNAPI TradeInterestGoal(
        ::Mob& mob,
        float  interestDistance,
        float  interestTime,
        float  removeTime,
        float  carriedTime,
        float  cooldown
    );

    MCNAPI bool _isLookingAtMe(::Player const& target) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Mob& mob, float interestDistance, float interestTime, float removeTime, float carriedTime, float cooldown);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
