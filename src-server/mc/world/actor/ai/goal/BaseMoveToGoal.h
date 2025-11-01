#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Mob;
// clang-format on

class BaseMoveToGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTravelTicks;
    ::ll::TypedStorage<4, 4, int> mNextStartTick;
    ::ll::TypedStorage<4, 4, int> mGiveUpTicks;
    ::ll::TypedStorage<4, 4, int> mStayTicks;
    ::ll::TypedStorage<4, 4, int> mMaxStayTicks;
    ::ll::TypedStorage<1, 1, bool> mReachedTarget;
    ::ll::TypedStorage<4, 4, float> mSpeedMod;
    ::ll::TypedStorage<4, 4, float> mGoalRadiusSq;
    ::ll::TypedStorage<8, 8, uint64> mCooldownCounter;
    ::ll::TypedStorage<8, 8, uint64> mCooldownTimeoutTime;
    ::ll::TypedStorage<4, 12, ::BlockPos> mStartPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mTargetPositionOffset;
    ::ll::TypedStorage<4, 4, float> mChanceToStart;
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<4, 4, int> mInterval;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseMoveToGoal& operator=(BaseMoveToGoal const&);
    BaseMoveToGoal(BaseMoveToGoal const&);
    BaseMoveToGoal();

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

    // vIndex: 10
    virtual bool hasReachedTarget() const;

    // vIndex: 11
    virtual bool isValidTarget(::BlockSource&, ::BlockPos const&) = 0;

    // vIndex: 12
    virtual int _nextStartTick();

    // vIndex: 13
    virtual bool _canReach(::BlockPos const& pos);

    // vIndex: 14
    virtual void _moveToBlock() = 0;

    // vIndex: 15
    virtual ::Vec3 _getTargetPosition() const;

    // vIndex: 16
    virtual uint64 _getRepathTime() const;

    // vIndex: 0
    virtual ~BaseMoveToGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _checkIfStuck();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCFOLD void $stop();

    MCAPI void $tick();

    MCFOLD bool $hasReachedTarget() const;

    MCAPI int $_nextStartTick();

    MCAPI bool $_canReach(::BlockPos const& pos);

    MCAPI ::Vec3 $_getTargetPosition() const;

    MCFOLD uint64 $_getRepathTime() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND

};
