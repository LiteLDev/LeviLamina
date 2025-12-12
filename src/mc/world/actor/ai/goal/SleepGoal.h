#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"
#include "mc/world/actor/ai/util/BedHelper.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class SleepGoal : public ::MoveToPOIGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>       mMob;
    ::ll::TypedStorage<4, 40, ::BedHelper> mBedHelper;
    ::ll::TypedStorage<4, 12, ::BlockPos>  mBedPos;
    ::ll::TypedStorage<4, 12, ::Vec3>      mSleepPos;
    ::ll::TypedStorage<4, 12, ::Vec3>      mBedOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>      mEnterPos;
    ::ll::TypedStorage<4, 12, ::Vec3>      mExitPos;
    ::ll::TypedStorage<4, 4, int>          mBedDir;
    ::ll::TypedStorage<4, 4, float>        mBodyRot;
    ::ll::TypedStorage<4, 4, float const>  mSleepYOffset;
    ::ll::TypedStorage<4, 4, float const>  mSleepColliderHeight;
    ::ll::TypedStorage<4, 4, float const>  mSleepColliderWidth;
    ::ll::TypedStorage<1, 1, bool const>   mCanSleepWhileRiding;
    ::ll::TypedStorage<8, 8, ::Tick const> mGoalCooldownMax;
    ::ll::TypedStorage<8, 8, ::Tick>       mCooldownTick;
    ::ll::TypedStorage<1, 1, bool>         mWoken;
    ::ll::TypedStorage<1, 1, bool>         mGoalEndedEarly;
    // NOLINTEND

public:
    // prevent constructor by default
    SleepGoal& operator=(SleepGoal const&);
    SleepGoal(SleepGoal const&);
    SleepGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual uint64 _getRepathTime() const /*override*/;

    virtual ~SleepGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _findExitPos();

    MCNAPI void _lockPosToBedPos();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI uint64 $_getRepathTime() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
