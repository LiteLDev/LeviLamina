#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class SwimUpForBreathGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk19cc93;
    ::ll::UntypedStorage<4, 4>  mUnkc6ee4f;
    ::ll::UntypedStorage<4, 4>  mUnk7b7ff5;
    ::ll::UntypedStorage<4, 4>  mUnkabff2a;
    ::ll::UntypedStorage<8, 8>  mUnk537fa6;
    ::ll::UntypedStorage<4, 12> mUnk57bea3;
    ::ll::UntypedStorage<4, 4>  mUnk2ae720;
    ::ll::UntypedStorage<1, 1>  mUnkc641f3;
    // NOLINTEND

public:
    // prevent constructor by default
    SwimUpForBreathGoal& operator=(SwimUpForBreathGoal const&);
    SwimUpForBreathGoal(SwimUpForBreathGoal const&);
    SwimUpForBreathGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 3
    virtual bool canBeInterrupted() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~SwimUpForBreathGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SwimUpForBreathGoal(::Mob& mob);

    MCAPI int _determineApproximateLiquidDepthOfMob() const;

    MCAPI void _findAirPosition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
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

    MCAPI bool $canBeInterrupted();

    MCAPI void $start();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
