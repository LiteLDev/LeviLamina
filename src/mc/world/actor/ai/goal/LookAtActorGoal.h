#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class LookAtActorGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>> mLookAt;
    ::ll::TypedStorage<4, 4, float>                mLookDistance;
    ::ll::TypedStorage<4, 4, int>                  mAngleOfViewX;
    ::ll::TypedStorage<4, 4, int>                  mAngleOfViewY;
    ::ll::TypedStorage<4, 4, int>                  mLookTime;
    ::ll::TypedStorage<4, 4, int>                  mMinLookTime;
    ::ll::TypedStorage<4, 4, int>                  mMaxLookTime;
    ::ll::TypedStorage<4, 4, float>                mProbability;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>  mTargetFilter;
    ::ll::TypedStorage<8, 8, ::Mob&>               mMob;
    // NOLINTEND

public:
    // prevent constructor by default
    LookAtActorGoal& operator=(LookAtActorGoal const&);
    LookAtActorGoal(LookAtActorGoal const&);
    LookAtActorGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LookAtActorGoal() /*override*/;

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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _withinFieldOfView(::Actor& entity);
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

    MCFOLD void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
