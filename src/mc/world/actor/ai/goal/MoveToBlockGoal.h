#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/TargetSelectionMethod.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class Block;
class ItemDescriptor;
class Mob;
// clang-format on

class MoveToBlockGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                            mGiveUpTicks;
    ::ll::TypedStorage<4, 4, int>                                            mStayDurationTicks;
    ::ll::TypedStorage<4, 4, float>                                          mSpeedMod;
    ::ll::TypedStorage<4, 4, float>                                          mGoalRadiusSq;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                    mTargetBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mTargetPositionOffset;
    ::ll::TypedStorage<4, 4, float>                                          mChanceToStart;
    ::ll::TypedStorage<4, 4, int>                                            mInterval;
    ::ll::TypedStorage<4, 4, int>                                            mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                            mSearchHeight;
    ::ll::TypedStorage<1, 1, ::TargetSelectionMethod const>                  mMethod;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger> const> mOnReachTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger> const> mOnStayCompletedTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor> const>         mTargetBlockDescriptors;
    ::ll::TypedStorage<8, 8, uint64>                                         mCooldownCounter;
    ::ll::TypedStorage<8, 8, uint64 const>                                   mCooldownTimeoutTime;
    ::ll::TypedStorage<1, 1, bool>                                           mReachedTarget;
    ::ll::TypedStorage<4, 4, int>                                            mNextStartTick;
    ::ll::TypedStorage<4, 4, int>                                            mStayTicks;
    ::ll::TypedStorage<4, 4, int>                                            mTravelTicks;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                    mStartPos;
    ::ll::TypedStorage<8, 8, ::Mob&>                                         mMob;
    ::ll::TypedStorage<1, 1, bool>                                           mHasSentOnReachEvent;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                            mTargetBlockFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToBlockGoal& operator=(MoveToBlockGoal const&);
    MoveToBlockGoal(MoveToBlockGoal const&);
    MoveToBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 0
    virtual ~MoveToBlockGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MoveToBlockGoal(
        ::Mob&                                  mob,
        float                                   speedModifier,
        int                                     searchRange,
        int                                     searchHeight,
        int                                     tickInterval,
        int                                     stayDurationTicks,
        float                                   goalRadius,
        ::Vec3                                  targetPositionOffset,
        float                                   chanceToStart,
        ::TargetSelectionMethod                 targetSelectionMethod,
        ::std::vector<::ActorDefinitionTrigger> onReachTriggers,
        ::std::vector<::ActorDefinitionTrigger> onStayCompletedTriggers,
        ::std::vector<::ItemDescriptor>         targetBlocks,
        ::ActorFilterGroup const&               targetBlockFilter
    );

    MCNAPI void _checkIfStuck();

    MCNAPI bool _findTargetBlock();

    MCNAPI bool _isValidTarget(::Block const& candidateBlock) const;

    MCNAPI void _moveToBlock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Mob&                                  mob,
        float                                   speedModifier,
        int                                     searchRange,
        int                                     searchHeight,
        int                                     tickInterval,
        int                                     stayDurationTicks,
        float                                   goalRadius,
        ::Vec3                                  targetPositionOffset,
        float                                   chanceToStart,
        ::TargetSelectionMethod                 targetSelectionMethod,
        ::std::vector<::ActorDefinitionTrigger> onReachTriggers,
        ::std::vector<::ActorDefinitionTrigger> onStayCompletedTriggers,
        ::std::vector<::ItemDescriptor>         targetBlocks,
        ::ActorFilterGroup const&               targetBlockFilter
    );
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

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI void $start();

    MCNAPI void $stop();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
