#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/actor/ai/goal/TransportItemsGoalSettings.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockSource;
class Mob;
class Vec3;
// clang-format on

class TransportItemsGoal : public ::Goal {
public:
    // TransportItemsGoal inner types declare
    // clang-format off
    class ContainerCloser;
    // clang-format on

    // TransportItemsGoal inner types define
    enum class Event : int {
        StartTakeInteractionWillFail     = 0,
        StartTakeInteractionWillSucceed  = 1,
        StartPlaceInteractionWillFail    = 2,
        StartPlaceInteractionWillSucceed = 3,
        FinishedInteraction              = 4,
    };

    enum class State : int {
        Idle        = 0,
        Travelling  = 1,
        Queuing     = 2,
        Interacting = 3,
    };

    class ContainerCloser {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ChestBlockActor::ChestCloser>> mChestCloser;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                                  mMob;
    ::ll::TypedStorage<8, 136, ::TransportItemsGoalSettings>                          mSettings;
    ::ll::TypedStorage<4, 4, ::TransportItemsGoal::State>                             mState;
    ::ll::TypedStorage<4, 4, uint>                                                    mCountedPositions;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                              mVisitedPositions;
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>>                                mInteractEndTick;
    ::ll::TypedStorage<8, 16, ::std::optional<::Tick>>                                mCooldownEndTick;
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>>                            mTargetContainerPosition;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                   mWasHoldingItemLastTick;
    ::ll::TypedStorage<8, 24, ::std::optional<::TransportItemsGoal::ContainerCloser>> mContainerCloser;
    ::ll::TypedStorage<1, 1, bool>                                                    mCheckLineOfSight;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportItemsGoal& operator=(TransportItemsGoal const&);
    TransportItemsGoal(TransportItemsGoal const&);
    TransportItemsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~TransportItemsGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canSeeTarget(::BlockPos const& targetPosition) const;

    MCAPI void _executeEvent(::TransportItemsGoal::Event event) const;

    MCAPI void _tickIdle();

    MCAPI void _tickQueuing(::BlockPos const& targetPos);

    MCAPI void _tickTravelling(::BlockPos const& targetPos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _canSeeTarget(
        ::BlockSource const& region,
        ::Vec3 const&        mobHeadPosition,
        ::AABB const&        visualShape,
        ::BlockPos const&    targetPosition
    );
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
