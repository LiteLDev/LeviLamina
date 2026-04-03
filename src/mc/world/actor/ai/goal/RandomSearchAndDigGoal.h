#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/actor/ai/util/ExpiringTick.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class BlockSource;
class Mob;
class Path;
// clang-format on

class RandomSearchAndDigGoal : public ::Goal {
public:
    // RandomSearchAndDigGoal inner types define
    enum class CanUseOutcome : int {
        Ok                    = 0,
        InCooldown            = 1,
        NoNavigation          = 2,
        CouldNotFindTargetPos = 3,
        CouldNotCreatePath    = 4,
        CouldNotPathAllTheWay = 5,
    };

    enum class State : int {
        Searching = 0,
        Digging   = 1,
        Success   = 2,
        Done      = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                             mSpeedMod;
    ::ll::TypedStorage<4, 4, float>                             mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                             mDigSpawnItemPosOffset;
    ::ll::TypedStorage<4, 4, float>                             mDigSpawnItemAfterSeconds;
    ::ll::TypedStorage<4, 4, float>                             mTargetDigPositionOffset;
    ::ll::TypedStorage<4, 4, int>                               mFindWantedPosRetries;
    ::ll::TypedStorage<4, 4, int>                               mSearchRangeXZ;
    ::ll::TypedStorage<4, 4, int>                               mSearchRangeY;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnSearchingStartEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnFailDuringSearchingEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnDiggingStartEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnItemFoundEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnFailDuringDiggingEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>        mOnSuccessEvent;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mTargetBlocks;
    ::ll::TypedStorage<8, 32, ::std::string>                    mItemTable;
    ::ll::TypedStorage<8, 8, ::Mob&>                            mMob;
    ::ll::TypedStorage<4, 4, ::RandomSearchAndDigGoal::State>   mState;
    ::ll::TypedStorage<4, 4, float>                             mGoalRadiusSqr;
    ::ll::TypedStorage<1, 1, bool>                              mItemFound;
    ::ll::TypedStorage<4, 12, ::BlockPos>                       mTargetPos;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>         mPath;
    ::ll::TypedStorage<2, 2, ushort>                            mCooldownDurationTicks;
    ::ll::TypedStorage<2, 2, ushort>                            mDiggingDurationTicks;
    ::ll::TypedStorage<2, 2, ushort>                            mSpawnItemAfterTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                            mCooldownEndTick;
    ::ll::TypedStorage<8, 8, ::Tick>                            mItemFoundEndTick;
    ::ll::TypedStorage<8, 8, ::Tick>                            mDiggingEndTick;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>  mDiggingParticleCooldown;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomSearchAndDigGoal& operator=(RandomSearchAndDigGoal const&);
    RandomSearchAndDigGoal(RandomSearchAndDigGoal const&);
    RandomSearchAndDigGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~RandomSearchAndDigGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RandomSearchAndDigGoal(::Mob& mob);

    MCAPI ::RandomSearchAndDigGoal::CanUseOutcome _canUse();

    MCAPI void _digUpItems();

    MCAPI void _emitDiggingParticles();

    MCAPI ::std::optional<::BlockPos> _findWantedTargetPos() const;

    MCAPI bool _isValidTarget(::BlockSource const& region, ::BlockPos pos) const;

    MCAPI void _triggerEvent(::ActorDefinitionTrigger const& eventTrigger) const;
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
