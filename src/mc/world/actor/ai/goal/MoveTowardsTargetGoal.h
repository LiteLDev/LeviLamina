#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Vec3;
// clang-format on

class MoveTowardsTargetGoal : public ::Goal {
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~MoveTowardsTargetGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveTowardsTargetGoal(::Mob& pathMob, float speedModifier, float within);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& pathMob, float speedModifier, float within);
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

    MCFOLD void $stop();

    MCAPI void $start();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
