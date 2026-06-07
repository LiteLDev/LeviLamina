#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class MoveTowardsTargetGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>> mTarget;
    ::ll::TypedStorage<8, 8, ::Mob&>               mMob;
    ::ll::TypedStorage<4, 4, float>                mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                mWithin;
    ::ll::TypedStorage<4, 12, ::Vec3>              mWantedPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveTowardsTargetGoal& operator=(MoveTowardsTargetGoal const&);
    MoveTowardsTargetGoal(MoveTowardsTargetGoal const&);
    MoveTowardsTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void stop() /*override*/;

    virtual void start() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MoveTowardsTargetGoal(::Mob& pathMob);

    MCAPI MoveTowardsTargetGoal(::Mob& pathMob, float speedModifier, float within);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& pathMob);

    MCAPI void* $ctor(::Mob& pathMob, float speedModifier, float within);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCFOLD void $stop();

    MCAPI void $start();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
