#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class RandomLookAroundGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>  mMinAngleOfView;
    ::ll::TypedStorage<4, 4, float>  mMaxAngleOfView;
    ::ll::TypedStorage<4, 4, int>    mMinLookTime;
    ::ll::TypedStorage<4, 4, int>    mMaxLookTime;
    ::ll::TypedStorage<4, 4, float>  mProbability;
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<4, 4, int>    mTotalLookTime;
    ::ll::TypedStorage<4, 4, float>  mInitialRotation;
    ::ll::TypedStorage<4, 4, float>  mTargetRotation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~RandomLookAroundGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RandomLookAroundGoal(
        ::Mob& mob,
        int    minLookTime,
        int    maxLookTime,
        float  minAngleOfView,
        float  maxAngleOfView,
        float  probability
    );

    MCAPI void _setRandomLook();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Mob& mob, int minLookTime, int maxLookTime, float minAngleOfView, float maxAngleOfView, float probability);
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

    MCAPI void $start();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
