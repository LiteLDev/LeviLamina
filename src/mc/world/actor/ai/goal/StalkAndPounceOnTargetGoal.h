#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Mob;
class Vec3;
// clang-format on

class StalkAndPounceOnTargetGoal : public ::Goal {
public:
    // StalkAndPounceOnTargetGoal inner types define
    enum class StalkAndPounceState : uchar {
        Stalking   = 0,
        Interested = 1,
        Pouncing   = 2,
        Stuck      = 3,
        Done       = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                             mStalkSpeed;
    ::ll::TypedStorage<4, 4, float>                                             mStalkingMaxDistanceSqr;
    ::ll::TypedStorage<4, 4, float>                                             mLeapHeight;
    ::ll::TypedStorage<4, 4, float>                                             mLeapDistance;
    ::ll::TypedStorage<4, 4, float>                                             mMaxPounceDistanceSqr;
    ::ll::TypedStorage<4, 4, float>                                             mStrikeDistanceSqr;
    ::ll::TypedStorage<4, 4, int>                                               mInterestedTicks;
    ::ll::TypedStorage<4, 4, int>                                               mStuckTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                                            mEndTimestamp;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                               mStuckBlockList;
    ::ll::TypedStorage<1, 1, ::StalkAndPounceOnTargetGoal::StalkAndPounceState> mState;
    ::ll::TypedStorage<8, 8, ::Mob&>                                            mMob;
    ::ll::TypedStorage<1, 1, bool>                                              mSetPersistent;
    // NOLINTEND

public:
    // prevent constructor by default
    StalkAndPounceOnTargetGoal& operator=(StalkAndPounceOnTargetGoal const&);
    StalkAndPounceOnTargetGoal(StalkAndPounceOnTargetGoal const&);
    StalkAndPounceOnTargetGoal();

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

    // vIndex: 3
    virtual bool canBeInterrupted() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~StalkAndPounceOnTargetGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _attemptToStrike(::Vec3 const& mobPos, ::Vec3 const& targetPos);

    MCAPI bool _isPouncePathClear(::Vec3 const& mobPos, ::Vec3 const& targetPos) const;

    MCAPI bool _isStuckBlock(::BlockPos blockPos) const;

    MCAPI void _pounce(::Vec3 const& mobPos, ::Vec3 const& targetPos) const;

    MCAPI void _preparePounce(::Vec3 const& mobPos, ::Vec3 const& targetPos);

    MCAPI void _stuck();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI bool $canBeInterrupted();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
