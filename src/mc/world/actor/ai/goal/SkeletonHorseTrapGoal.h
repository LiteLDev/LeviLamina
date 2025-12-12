#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Horse;
class Player;
class Skeleton;
// clang-format on

class SkeletonHorseTrapGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Horse&> mHorse;
    ::ll::TypedStorage<4, 4, int>      mTrapLifeTicks;
    ::ll::TypedStorage<4, 4, float>    mTriggerDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    SkeletonHorseTrapGoal& operator=(SkeletonHorseTrapGoal const&);
    SkeletonHorseTrapGoal(SkeletonHorseTrapGoal const&);
    SkeletonHorseTrapGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick() /*override*/;

    virtual bool canUse() /*override*/;

    virtual void start() /*override*/;

    virtual void appendDebugInfo(::std::string& debugInfo) const /*override*/;

    virtual ~SkeletonHorseTrapGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Horse* _createHorse(::SharedTypes::Legacy::Difficulty const& difficulty);

    MCNAPI ::Skeleton* _createSkeleton(::SharedTypes::Legacy::Difficulty const& difficulty, ::Horse const& otherHorse);

    MCNAPI ::Player* _getClosestPlayer() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick();

    MCNAPI bool $canUse();

    MCNAPI void $start();

    MCNAPI void $appendDebugInfo(::std::string& debugInfo) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
