#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Path;
// clang-format on

class EatMobGoal : public ::Goal {
public:
    // EatMobGoal inner types define
    enum class State : int {
        MoveToTarget = 0,
        EatAnimation = 1,
        Done = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mTargetId;
    ::ll::TypedStorage<4, 4, float> mRunSpeed;
    ::ll::TypedStorage<4, 4, float> mEatAnimationTime;
    ::ll::TypedStorage<4, 4, float> mPullInForce;
    ::ll::TypedStorage<4, 4, float> mReachMobDistance;
    ::ll::TypedStorage<8, 32, ::std::string> mEatMobSound;
    ::ll::TypedStorage<8, 32, ::std::string> mLootTable;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mPath;
    ::ll::TypedStorage<4, 4, ::EatMobGoal::State> mState;
    ::ll::TypedStorage<8, 8, ::Tick> mEatAnimationTimer;
    ::ll::TypedStorage<8, 8, ::Tick> mLastPathCalculationTick;
    ::ll::TypedStorage<1, 1, bool> mShouldKillTarget;
    ::ll::TypedStorage<4, 12, ::Vec3> mDropPos;
    // NOLINTEND

public:
    // prevent constructor by default
    EatMobGoal& operator=(EatMobGoal const&);
    EatMobGoal(EatMobGoal const&);
    EatMobGoal();

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

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~EatMobGoal() /*override*/;
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
