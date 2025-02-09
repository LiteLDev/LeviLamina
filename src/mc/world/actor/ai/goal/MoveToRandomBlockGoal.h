#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Vec3;
// clang-format on

class MoveToRandomBlockGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>  mMob;
    ::ll::TypedStorage<4, 12, ::Vec3> mDestination;
    ::ll::TypedStorage<4, 12, ::Vec3> mLastPos;
    ::ll::TypedStorage<4, 4, int>     mFailedPathing;
    ::ll::TypedStorage<4, 4, int>     mTotalFailedPathing;
    ::ll::TypedStorage<4, 4, float>   mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>   mRadiusSq;
    ::ll::TypedStorage<4, 4, float>   mBlockDistance;
    ::ll::TypedStorage<4, 4, int>     mCooldownTimer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 0
    virtual ~MoveToRandomBlockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveToRandomBlockGoal(::Mob& mob, float speedModifier, float within, float blockDistance);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, float speedModifier, float within, float blockDistance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI void $stop();

    MCAPI void $start();

    MCAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
