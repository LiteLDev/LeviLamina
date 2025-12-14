#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class RandomSitGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>      mMob;
    ::ll::TypedStorage<4, 4, float const> mStartChance;
    ::ll::TypedStorage<4, 4, float const> mStopChance;
    ::ll::TypedStorage<8, 8, uint64>      mCooldown;
    ::ll::TypedStorage<4, 4, int const>   mSitCooldownTotal;
    ::ll::TypedStorage<4, 4, int const>   mMinSitTick;
    ::ll::TypedStorage<4, 4, int>         mCurrentSitTick;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomSitGoal& operator=(RandomSitGoal const&);
    RandomSitGoal(RandomSitGoal const&);
    RandomSitGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~RandomSitGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI bool $canContinueToUse();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
