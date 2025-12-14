#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class FollowMobGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>              mMob;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilters;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Mob>>  mFollowingMob;
    ::ll::TypedStorage<8, 32, ::std::string>      mPreferredActorType;
    ::ll::TypedStorage<4, 4, float>               mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>               mStopDistance;
    ::ll::TypedStorage<4, 4, int>                 mTimeToRecalcPath;
    ::ll::TypedStorage<4, 4, int>                 mSearchRange;
    ::ll::TypedStorage<1, 1, bool>                mUseHomePositionRestriction;
    // NOLINTEND

public:
    // prevent constructor by default
    FollowMobGoal& operator=(FollowMobGoal const&);
    FollowMobGoal(FollowMobGoal const&);
    FollowMobGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~FollowMobGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::gsl::span<::gsl::not_null<::Actor*>> _findCandidateMobs();

    MCAPI void setFilters(::ActorFilterGroup& filters);
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
