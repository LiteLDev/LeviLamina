#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class TradeInterestGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk5c9761;
    ::ll::UntypedStorage<8, 40>  mUnk9ef310;
    ::ll::UntypedStorage<1, 1>   mUnkf10327;
    ::ll::UntypedStorage<1, 1>   mUnk843606;
    ::ll::UntypedStorage<4, 4>   mUnk450712;
    ::ll::UntypedStorage<8, 8>   mUnkcc3cd6;
    ::ll::UntypedStorage<8, 152> mUnk75a44a;
    ::ll::UntypedStorage<8, 152> mUnkc8856a;
    ::ll::UntypedStorage<8, 8>   mUnkd823ff;
    ::ll::UntypedStorage<8, 8>   mUnk64ded3;
    ::ll::UntypedStorage<8, 8>   mUnkfb68e2;
    ::ll::UntypedStorage<8, 8>   mUnke61bcc;
    ::ll::UntypedStorage<8, 8>   mUnk2c6711;
    ::ll::UntypedStorage<8, 8>   mUnk5e281b;
    ::ll::UntypedStorage<8, 8>   mUnk4c8a83;
    ::ll::UntypedStorage<8, 8>   mUnk1763bb;
    ::ll::UntypedStorage<8, 8>   mUnk566530;
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
    MCAPI TradeInterestGoal(
        ::Mob& mob,
        float  interestDistance,
        float  interestTime,
        float  removeTime,
        float  carriedTime,
        float  cooldown
    );
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
