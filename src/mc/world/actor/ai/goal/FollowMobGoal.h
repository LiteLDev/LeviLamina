#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class FollowMobGoal : public ::BaseGoal {
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

    virtual void appendDebugInfo(::std::string&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FollowMobGoal(
        ::Mob&                    mob,
        float                     speedMultiplier,
        float                     stopDistance,
        int                       searchRange,
        bool                      useHomePositionRestriction,
        ::std::string const&      preferredActorType,
        ::ActorFilterGroup const& filters
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                    mob,
        float                     speedMultiplier,
        float                     stopDistance,
        int                       searchRange,
        bool                      useHomePositionRestriction,
        ::std::string const&      preferredActorType,
        ::ActorFilterGroup const& filters
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
