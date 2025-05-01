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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& debugInfo) const /*override*/;

    // vIndex: 0
    virtual ~SkeletonHorseTrapGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Horse* _createHorse(::SharedTypes::Legacy::Difficulty const& difficulty);

    MCNAPI ::Skeleton* _createSkeleton(::SharedTypes::Legacy::Difficulty const& otherHorse, ::Horse const& difficulty);

    MCNAPI ::Player* _getClosestPlayer() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
