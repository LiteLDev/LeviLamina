#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"
#include "mc/world/actor/ai/util/BedHelper.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class SleepGoal : public ::MoveToPOIGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<4, 40, ::BedHelper> mBedHelper;
    ::ll::TypedStorage<4, 12, ::BlockPos> mBedPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mSleepPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mBedOffset;
    ::ll::TypedStorage<4, 12, ::Vec3> mEnterPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mExitPos;
    ::ll::TypedStorage<4, 4, int> mBedDir;
    ::ll::TypedStorage<4, 4, float> mBodyRot;
    ::ll::TypedStorage<4, 4, float const> mSleepYOffset;
    ::ll::TypedStorage<4, 4, float const> mSleepColliderHeight;
    ::ll::TypedStorage<4, 4, float const> mSleepColliderWidth;
    ::ll::TypedStorage<1, 1, bool const> mCanSleepWhileRiding;
    ::ll::TypedStorage<8, 8, ::Tick const> mGoalCooldownMax;
    ::ll::TypedStorage<8, 8, ::Tick> mCooldownTick;
    ::ll::TypedStorage<1, 1, bool> mWoken;
    ::ll::TypedStorage<1, 1, bool> mGoalEndedEarly;
    // NOLINTEND

public:
    // prevent constructor by default
    SleepGoal& operator=(SleepGoal const&);
    SleepGoal(SleepGoal const&);
    SleepGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 16
    virtual uint64 _getRepathTime() const /*override*/;

    // vIndex: 0
    virtual ~SleepGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _findExitPos();

    MCAPI void _lockPosToBedPos();
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

    MCFOLD uint64 $_getRepathTime() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
